#pragma once
// MESSAGE TEST PACKING

#define MAVLINK_MSG_ID_TEST 1111


typedef struct __mavlink_test_t {
 uint32_t time_boot_ms; /*< [ms]  Timestamp */
 int32_t lat; /*< [degE7]  lattitude */
 int32_t lon; /*< [degE7]  longtitude */
 float roll; /*< [rad]  roll angle */
 float pitch; /*< [rad]  pitch angle */
 float yaw; /*< [rad]  raw angle */
 float temperature; /*< [cdegC]  absolute temperature */
} mavlink_test_t;

#define MAVLINK_MSG_ID_TEST_LEN 28
#define MAVLINK_MSG_ID_TEST_MIN_LEN 28
#define MAVLINK_MSG_ID_1111_LEN 28
#define MAVLINK_MSG_ID_1111_MIN_LEN 28

#define MAVLINK_MSG_ID_TEST_CRC 191
#define MAVLINK_MSG_ID_1111_CRC 191



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TEST { \
    1111, \
    "TEST", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_test_t, time_boot_ms) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_test_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_test_t, lon) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_test_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_test_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_test_t, yaw) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_test_t, temperature) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TEST { \
    "TEST", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_test_t, time_boot_ms) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_test_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_test_t, lon) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_test_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_test_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_test_t, yaw) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_test_t, temperature) }, \
         } \
}
#endif

/**
 * @brief Pack a test message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms]  Timestamp 
 * @param lat [degE7]  lattitude 
 * @param lon [degE7]  longtitude 
 * @param roll [rad]  roll angle 
 * @param pitch [rad]  pitch angle 
 * @param yaw [rad]  raw angle 
 * @param temperature [degC]  absolute temperature 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, int32_t lat, int32_t lon, float roll, float pitch, float yaw, float temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_float(buf, 12, roll);
    _mav_put_float(buf, 16, pitch);
    _mav_put_float(buf, 20, yaw);
    _mav_put_float(buf, 24, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_LEN);
#else
    mavlink_test_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.lat = lat;
    packet.lon = lon;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TEST_MIN_LEN, MAVLINK_MSG_ID_TEST_LEN, MAVLINK_MSG_ID_TEST_CRC);
}

/**
 * @brief Pack a test message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms]  Timestamp 
 * @param lat [degE7]  lattitude 
 * @param lon [degE7]  longtitude 
 * @param roll [rad]  roll angle 
 * @param pitch [rad]  pitch angle 
 * @param yaw [rad]  raw angle 
 * @param temperature [degC]  absolute temperature 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t time_boot_ms, int32_t lat, int32_t lon, float roll, float pitch, float yaw, float temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_float(buf, 12, roll);
    _mav_put_float(buf, 16, pitch);
    _mav_put_float(buf, 20, yaw);
    _mav_put_float(buf, 24, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_LEN);
#else
    mavlink_test_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.lat = lat;
    packet.lon = lon;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TEST_MIN_LEN, MAVLINK_MSG_ID_TEST_LEN, MAVLINK_MSG_ID_TEST_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TEST_MIN_LEN, MAVLINK_MSG_ID_TEST_LEN);
#endif
}

/**
 * @brief Pack a test message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms]  Timestamp 
 * @param lat [degE7]  lattitude 
 * @param lon [degE7]  longtitude 
 * @param roll [rad]  roll angle 
 * @param pitch [rad]  pitch angle 
 * @param yaw [rad]  raw angle 
 * @param temperature [degC]  absolute temperature 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,int32_t lat,int32_t lon,float roll,float pitch,float yaw,float temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_float(buf, 12, roll);
    _mav_put_float(buf, 16, pitch);
    _mav_put_float(buf, 20, yaw);
    _mav_put_float(buf, 24, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_LEN);
#else
    mavlink_test_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.lat = lat;
    packet.lon = lon;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TEST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TEST_MIN_LEN, MAVLINK_MSG_ID_TEST_LEN, MAVLINK_MSG_ID_TEST_CRC);
}

/**
 * @brief Encode a test struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param test C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_test_t* test)
{
    return mavlink_msg_test_pack(system_id, component_id, msg, test->time_boot_ms, test->lat, test->lon, test->roll, test->pitch, test->yaw, test->temperature);
}

/**
 * @brief Encode a test struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param test C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_test_t* test)
{
    return mavlink_msg_test_pack_chan(system_id, component_id, chan, msg, test->time_boot_ms, test->lat, test->lon, test->roll, test->pitch, test->yaw, test->temperature);
}

/**
 * @brief Encode a test struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param test C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_test_t* test)
{
    return mavlink_msg_test_pack_status(system_id, component_id, _status, msg,  test->time_boot_ms, test->lat, test->lon, test->roll, test->pitch, test->yaw, test->temperature);
}

/**
 * @brief Send a test message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms]  Timestamp 
 * @param lat [degE7]  lattitude 
 * @param lon [degE7]  longtitude 
 * @param roll [rad]  roll angle 
 * @param pitch [rad]  pitch angle 
 * @param yaw [rad]  raw angle 
 * @param temperature [degC]  absolute temperature 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_test_send(mavlink_channel_t chan, uint32_t time_boot_ms, int32_t lat, int32_t lon, float roll, float pitch, float yaw, float temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TEST_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_float(buf, 12, roll);
    _mav_put_float(buf, 16, pitch);
    _mav_put_float(buf, 20, yaw);
    _mav_put_float(buf, 24, temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST, buf, MAVLINK_MSG_ID_TEST_MIN_LEN, MAVLINK_MSG_ID_TEST_LEN, MAVLINK_MSG_ID_TEST_CRC);
#else
    mavlink_test_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.lat = lat;
    packet.lon = lon;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.temperature = temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST, (const char *)&packet, MAVLINK_MSG_ID_TEST_MIN_LEN, MAVLINK_MSG_ID_TEST_LEN, MAVLINK_MSG_ID_TEST_CRC);
#endif
}

/**
 * @brief Send a test message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_test_send_struct(mavlink_channel_t chan, const mavlink_test_t* test)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_test_send(chan, test->time_boot_ms, test->lat, test->lon, test->roll, test->pitch, test->yaw, test->temperature);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST, (const char *)test, MAVLINK_MSG_ID_TEST_MIN_LEN, MAVLINK_MSG_ID_TEST_LEN, MAVLINK_MSG_ID_TEST_CRC);
#endif
}

#if MAVLINK_MSG_ID_TEST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_test_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, int32_t lat, int32_t lon, float roll, float pitch, float yaw, float temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_float(buf, 12, roll);
    _mav_put_float(buf, 16, pitch);
    _mav_put_float(buf, 20, yaw);
    _mav_put_float(buf, 24, temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST, buf, MAVLINK_MSG_ID_TEST_MIN_LEN, MAVLINK_MSG_ID_TEST_LEN, MAVLINK_MSG_ID_TEST_CRC);
#else
    mavlink_test_t *packet = (mavlink_test_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->lat = lat;
    packet->lon = lon;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->yaw = yaw;
    packet->temperature = temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST, (const char *)packet, MAVLINK_MSG_ID_TEST_MIN_LEN, MAVLINK_MSG_ID_TEST_LEN, MAVLINK_MSG_ID_TEST_CRC);
#endif
}
#endif

#endif

// MESSAGE TEST UNPACKING


/**
 * @brief Get field time_boot_ms from test message
 *
 * @return [ms]  Timestamp 
 */
static inline uint32_t mavlink_msg_test_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field lat from test message
 *
 * @return [degE7]  lattitude 
 */
static inline int32_t mavlink_msg_test_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field lon from test message
 *
 * @return [degE7]  longtitude 
 */
static inline int32_t mavlink_msg_test_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field roll from test message
 *
 * @return [rad]  roll angle 
 */
static inline float mavlink_msg_test_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field pitch from test message
 *
 * @return [rad]  pitch angle 
 */
static inline float mavlink_msg_test_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field yaw from test message
 *
 * @return [rad]  raw angle 
 */
static inline float mavlink_msg_test_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field temperature from test message
 *
 * @return [degC]  absolute temperature 
 */
static inline float mavlink_msg_test_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a test message into a struct
 *
 * @param msg The message to decode
 * @param test C-struct to decode the message contents into
 */
static inline void mavlink_msg_test_decode(const mavlink_message_t* msg, mavlink_test_t* test)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    test->time_boot_ms = mavlink_msg_test_get_time_boot_ms(msg);
    test->lat = mavlink_msg_test_get_lat(msg);
    test->lon = mavlink_msg_test_get_lon(msg);
    test->roll = mavlink_msg_test_get_roll(msg);
    test->pitch = mavlink_msg_test_get_pitch(msg);
    test->yaw = mavlink_msg_test_get_yaw(msg);
    test->temperature = mavlink_msg_test_get_temperature(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TEST_LEN? msg->len : MAVLINK_MSG_ID_TEST_LEN;
        memset(test, 0, MAVLINK_MSG_ID_TEST_LEN);
    memcpy(test, _MAV_PAYLOAD(msg), len);
#endif
}
