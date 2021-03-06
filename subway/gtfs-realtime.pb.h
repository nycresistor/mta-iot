/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev at Sun Aug 19 22:17:01 2018. */

#ifndef PB_TRANSIT_REALTIME_GTFS_REALTIME_PB_H_INCLUDED
#define PB_TRANSIT_REALTIME_GTFS_REALTIME_PB_H_INCLUDED
#include "pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _transit_realtime_FeedHeader_Incrementality {
    transit_realtime_FeedHeader_Incrementality_FULL_DATASET = 0,
    transit_realtime_FeedHeader_Incrementality_DIFFERENTIAL = 1
} transit_realtime_FeedHeader_Incrementality;
#define _transit_realtime_FeedHeader_Incrementality_MIN transit_realtime_FeedHeader_Incrementality_FULL_DATASET
#define _transit_realtime_FeedHeader_Incrementality_MAX transit_realtime_FeedHeader_Incrementality_DIFFERENTIAL
#define _transit_realtime_FeedHeader_Incrementality_ARRAYSIZE ((transit_realtime_FeedHeader_Incrementality)(transit_realtime_FeedHeader_Incrementality_DIFFERENTIAL+1))

typedef enum _transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship {
    transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship_SCHEDULED = 0,
    transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship_SKIPPED = 1,
    transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship_NO_DATA = 2
} transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship;
#define _transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship_MIN transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship_SCHEDULED
#define _transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship_MAX transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship_NO_DATA
#define _transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship_ARRAYSIZE ((transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship)(transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship_NO_DATA+1))

typedef enum _transit_realtime_VehiclePosition_VehicleStopStatus {
    transit_realtime_VehiclePosition_VehicleStopStatus_INCOMING_AT = 0,
    transit_realtime_VehiclePosition_VehicleStopStatus_STOPPED_AT = 1,
    transit_realtime_VehiclePosition_VehicleStopStatus_IN_TRANSIT_TO = 2
} transit_realtime_VehiclePosition_VehicleStopStatus;
#define _transit_realtime_VehiclePosition_VehicleStopStatus_MIN transit_realtime_VehiclePosition_VehicleStopStatus_INCOMING_AT
#define _transit_realtime_VehiclePosition_VehicleStopStatus_MAX transit_realtime_VehiclePosition_VehicleStopStatus_IN_TRANSIT_TO
#define _transit_realtime_VehiclePosition_VehicleStopStatus_ARRAYSIZE ((transit_realtime_VehiclePosition_VehicleStopStatus)(transit_realtime_VehiclePosition_VehicleStopStatus_IN_TRANSIT_TO+1))

typedef enum _transit_realtime_VehiclePosition_CongestionLevel {
    transit_realtime_VehiclePosition_CongestionLevel_UNKNOWN_CONGESTION_LEVEL = 0,
    transit_realtime_VehiclePosition_CongestionLevel_RUNNING_SMOOTHLY = 1,
    transit_realtime_VehiclePosition_CongestionLevel_STOP_AND_GO = 2,
    transit_realtime_VehiclePosition_CongestionLevel_CONGESTION = 3,
    transit_realtime_VehiclePosition_CongestionLevel_SEVERE_CONGESTION = 4
} transit_realtime_VehiclePosition_CongestionLevel;
#define _transit_realtime_VehiclePosition_CongestionLevel_MIN transit_realtime_VehiclePosition_CongestionLevel_UNKNOWN_CONGESTION_LEVEL
#define _transit_realtime_VehiclePosition_CongestionLevel_MAX transit_realtime_VehiclePosition_CongestionLevel_SEVERE_CONGESTION
#define _transit_realtime_VehiclePosition_CongestionLevel_ARRAYSIZE ((transit_realtime_VehiclePosition_CongestionLevel)(transit_realtime_VehiclePosition_CongestionLevel_SEVERE_CONGESTION+1))

typedef enum _transit_realtime_VehiclePosition_OccupancyStatus {
    transit_realtime_VehiclePosition_OccupancyStatus_EMPTY = 0,
    transit_realtime_VehiclePosition_OccupancyStatus_MANY_SEATS_AVAILABLE = 1,
    transit_realtime_VehiclePosition_OccupancyStatus_FEW_SEATS_AVAILABLE = 2,
    transit_realtime_VehiclePosition_OccupancyStatus_STANDING_ROOM_ONLY = 3,
    transit_realtime_VehiclePosition_OccupancyStatus_CRUSHED_STANDING_ROOM_ONLY = 4,
    transit_realtime_VehiclePosition_OccupancyStatus_FULL = 5,
    transit_realtime_VehiclePosition_OccupancyStatus_NOT_ACCEPTING_PASSENGERS = 6
} transit_realtime_VehiclePosition_OccupancyStatus;
#define _transit_realtime_VehiclePosition_OccupancyStatus_MIN transit_realtime_VehiclePosition_OccupancyStatus_EMPTY
#define _transit_realtime_VehiclePosition_OccupancyStatus_MAX transit_realtime_VehiclePosition_OccupancyStatus_NOT_ACCEPTING_PASSENGERS
#define _transit_realtime_VehiclePosition_OccupancyStatus_ARRAYSIZE ((transit_realtime_VehiclePosition_OccupancyStatus)(transit_realtime_VehiclePosition_OccupancyStatus_NOT_ACCEPTING_PASSENGERS+1))

typedef enum _transit_realtime_Alert_Cause {
    transit_realtime_Alert_Cause_UNKNOWN_CAUSE = 1,
    transit_realtime_Alert_Cause_OTHER_CAUSE = 2,
    transit_realtime_Alert_Cause_TECHNICAL_PROBLEM = 3,
    transit_realtime_Alert_Cause_STRIKE = 4,
    transit_realtime_Alert_Cause_DEMONSTRATION = 5,
    transit_realtime_Alert_Cause_ACCIDENT = 6,
    transit_realtime_Alert_Cause_HOLIDAY = 7,
    transit_realtime_Alert_Cause_WEATHER = 8,
    transit_realtime_Alert_Cause_MAINTENANCE = 9,
    transit_realtime_Alert_Cause_CONSTRUCTION = 10,
    transit_realtime_Alert_Cause_POLICE_ACTIVITY = 11,
    transit_realtime_Alert_Cause_MEDICAL_EMERGENCY = 12
} transit_realtime_Alert_Cause;
#define _transit_realtime_Alert_Cause_MIN transit_realtime_Alert_Cause_UNKNOWN_CAUSE
#define _transit_realtime_Alert_Cause_MAX transit_realtime_Alert_Cause_MEDICAL_EMERGENCY
#define _transit_realtime_Alert_Cause_ARRAYSIZE ((transit_realtime_Alert_Cause)(transit_realtime_Alert_Cause_MEDICAL_EMERGENCY+1))

typedef enum _transit_realtime_Alert_Effect {
    transit_realtime_Alert_Effect_NO_SERVICE = 1,
    transit_realtime_Alert_Effect_REDUCED_SERVICE = 2,
    transit_realtime_Alert_Effect_SIGNIFICANT_DELAYS = 3,
    transit_realtime_Alert_Effect_DETOUR = 4,
    transit_realtime_Alert_Effect_ADDITIONAL_SERVICE = 5,
    transit_realtime_Alert_Effect_MODIFIED_SERVICE = 6,
    transit_realtime_Alert_Effect_OTHER_EFFECT = 7,
    transit_realtime_Alert_Effect_UNKNOWN_EFFECT = 8,
    transit_realtime_Alert_Effect_STOP_MOVED = 9
} transit_realtime_Alert_Effect;
#define _transit_realtime_Alert_Effect_MIN transit_realtime_Alert_Effect_NO_SERVICE
#define _transit_realtime_Alert_Effect_MAX transit_realtime_Alert_Effect_STOP_MOVED
#define _transit_realtime_Alert_Effect_ARRAYSIZE ((transit_realtime_Alert_Effect)(transit_realtime_Alert_Effect_STOP_MOVED+1))

typedef enum _transit_realtime_TripDescriptor_ScheduleRelationship {
    transit_realtime_TripDescriptor_ScheduleRelationship_SCHEDULED = 0,
    transit_realtime_TripDescriptor_ScheduleRelationship_ADDED = 1,
    transit_realtime_TripDescriptor_ScheduleRelationship_UNSCHEDULED = 2,
    transit_realtime_TripDescriptor_ScheduleRelationship_CANCELED = 3
} transit_realtime_TripDescriptor_ScheduleRelationship;
#define _transit_realtime_TripDescriptor_ScheduleRelationship_MIN transit_realtime_TripDescriptor_ScheduleRelationship_SCHEDULED
#define _transit_realtime_TripDescriptor_ScheduleRelationship_MAX transit_realtime_TripDescriptor_ScheduleRelationship_CANCELED
#define _transit_realtime_TripDescriptor_ScheduleRelationship_ARRAYSIZE ((transit_realtime_TripDescriptor_ScheduleRelationship)(transit_realtime_TripDescriptor_ScheduleRelationship_CANCELED+1))

/* Struct definitions */
typedef struct _transit_realtime_TranslatedString {
    pb_callback_t translation;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_TranslatedString) */
} transit_realtime_TranslatedString;

typedef struct _transit_realtime_TranslatedString_Translation {
    pb_callback_t text;
    pb_callback_t language;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_TranslatedString_Translation) */
} transit_realtime_TranslatedString_Translation;

typedef struct _transit_realtime_VehicleDescriptor {
    pb_callback_t id;
    pb_callback_t label;
    pb_callback_t license_plate;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_VehicleDescriptor) */
} transit_realtime_VehicleDescriptor;

typedef struct _transit_realtime_Alert {
    pb_callback_t active_period;
    pb_callback_t informed_entity;
    bool has_cause;
    transit_realtime_Alert_Cause cause;
    bool has_effect;
    transit_realtime_Alert_Effect effect;
    bool has_url;
    transit_realtime_TranslatedString url;
    bool has_header_text;
    transit_realtime_TranslatedString header_text;
    bool has_description_text;
    transit_realtime_TranslatedString description_text;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_Alert) */
} transit_realtime_Alert;

typedef struct _transit_realtime_FeedHeader {
    pb_callback_t gtfs_realtime_version;
    bool has_incrementality;
    transit_realtime_FeedHeader_Incrementality incrementality;
    bool has_timestamp;
    uint64_t timestamp;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_FeedHeader) */
} transit_realtime_FeedHeader;

typedef struct _transit_realtime_Position {
    float latitude;
    float longitude;
    bool has_bearing;
    float bearing;
    bool has_odometer;
    double odometer;
    bool has_speed;
    float speed;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_Position) */
} transit_realtime_Position;

typedef struct _transit_realtime_TimeRange {
    bool has_start;
    uint64_t start;
    bool has_end;
    uint64_t end;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_TimeRange) */
} transit_realtime_TimeRange;

typedef struct _transit_realtime_TripDescriptor {
    pb_callback_t trip_id;
    pb_callback_t start_time;
    pb_callback_t start_date;
    bool has_schedule_relationship;
    transit_realtime_TripDescriptor_ScheduleRelationship schedule_relationship;
    pb_callback_t route_id;
    bool has_direction_id;
    uint32_t direction_id;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_TripDescriptor) */
} transit_realtime_TripDescriptor;

typedef struct _transit_realtime_TripUpdate_StopTimeEvent {
    bool has_delay;
    int32_t delay;
    bool has_time;
    int64_t time;
    bool has_uncertainty;
    int32_t uncertainty;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_TripUpdate_StopTimeEvent) */
} transit_realtime_TripUpdate_StopTimeEvent;

typedef struct _transit_realtime_EntitySelector {
    pb_callback_t agency_id;
    pb_callback_t route_id;
    bool has_route_type;
    int32_t route_type;
    bool has_trip;
    transit_realtime_TripDescriptor trip;
    pb_callback_t stop_id;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_EntitySelector) */
} transit_realtime_EntitySelector;

typedef struct _transit_realtime_FeedMessage {
    transit_realtime_FeedHeader header;
    pb_callback_t entity;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_FeedMessage) */
} transit_realtime_FeedMessage;

typedef struct _transit_realtime_TripUpdate {
    transit_realtime_TripDescriptor trip;
    pb_callback_t stop_time_update;
    bool has_vehicle;
    transit_realtime_VehicleDescriptor vehicle;
    bool has_timestamp;
    uint64_t timestamp;
    bool has_delay;
    int32_t delay;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_TripUpdate) */
} transit_realtime_TripUpdate;

typedef struct _transit_realtime_TripUpdate_StopTimeUpdate {
    bool has_stop_sequence;
    uint32_t stop_sequence;
    bool has_arrival;
    transit_realtime_TripUpdate_StopTimeEvent arrival;
    bool has_departure;
    transit_realtime_TripUpdate_StopTimeEvent departure;
    pb_callback_t stop_id;
    bool has_schedule_relationship;
    transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship schedule_relationship;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_TripUpdate_StopTimeUpdate) */
} transit_realtime_TripUpdate_StopTimeUpdate;

typedef struct _transit_realtime_VehiclePosition {
    bool has_trip;
    transit_realtime_TripDescriptor trip;
    bool has_position;
    transit_realtime_Position position;
    bool has_current_stop_sequence;
    uint32_t current_stop_sequence;
    bool has_current_status;
    transit_realtime_VehiclePosition_VehicleStopStatus current_status;
    bool has_timestamp;
    uint64_t timestamp;
    bool has_congestion_level;
    transit_realtime_VehiclePosition_CongestionLevel congestion_level;
    pb_callback_t stop_id;
    bool has_vehicle;
    transit_realtime_VehicleDescriptor vehicle;
    bool has_occupancy_status;
    transit_realtime_VehiclePosition_OccupancyStatus occupancy_status;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_VehiclePosition) */
} transit_realtime_VehiclePosition;

typedef struct _transit_realtime_FeedEntity {
    pb_callback_t id;
    bool has_is_deleted;
    bool is_deleted;
    bool has_trip_update;
    transit_realtime_TripUpdate trip_update;
    bool has_vehicle;
    transit_realtime_VehiclePosition vehicle;
    bool has_alert;
    transit_realtime_Alert alert;
    pb_extension_t *extensions;
/* @@protoc_insertion_point(struct:transit_realtime_FeedEntity) */
} transit_realtime_FeedEntity;

/* Default values for struct fields */
extern const transit_realtime_FeedHeader_Incrementality transit_realtime_FeedHeader_incrementality_default;
extern const bool transit_realtime_FeedEntity_is_deleted_default;
extern const transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship transit_realtime_TripUpdate_StopTimeUpdate_schedule_relationship_default;
extern const transit_realtime_VehiclePosition_VehicleStopStatus transit_realtime_VehiclePosition_current_status_default;
extern const transit_realtime_Alert_Cause transit_realtime_Alert_cause_default;
extern const transit_realtime_Alert_Effect transit_realtime_Alert_effect_default;

/* Initializer values for message structs */
#define transit_realtime_FeedMessage_init_default {transit_realtime_FeedHeader_init_default, {{NULL}, NULL}, NULL}
#define transit_realtime_FeedHeader_init_default {{{NULL}, NULL}, false, transit_realtime_FeedHeader_Incrementality_FULL_DATASET, false, 0, NULL}
#define transit_realtime_FeedEntity_init_default {{{NULL}, NULL}, false, false, false, transit_realtime_TripUpdate_init_default, false, transit_realtime_VehiclePosition_init_default, false, transit_realtime_Alert_init_default, NULL}
#define transit_realtime_TripUpdate_init_default {transit_realtime_TripDescriptor_init_default, {{NULL}, NULL}, false, transit_realtime_VehicleDescriptor_init_default, false, 0, false, 0, NULL}
#define transit_realtime_TripUpdate_StopTimeEvent_init_default {false, 0, false, 0, false, 0, NULL}
#define transit_realtime_TripUpdate_StopTimeUpdate_init_default {false, 0, false, transit_realtime_TripUpdate_StopTimeEvent_init_default, false, transit_realtime_TripUpdate_StopTimeEvent_init_default, {{NULL}, NULL}, false, transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship_SCHEDULED, NULL}
#define transit_realtime_VehiclePosition_init_default {false, transit_realtime_TripDescriptor_init_default, false, transit_realtime_Position_init_default, false, 0, false, transit_realtime_VehiclePosition_VehicleStopStatus_IN_TRANSIT_TO, false, 0, false, _transit_realtime_VehiclePosition_CongestionLevel_MIN, {{NULL}, NULL}, false, transit_realtime_VehicleDescriptor_init_default, false, _transit_realtime_VehiclePosition_OccupancyStatus_MIN, NULL}
#define transit_realtime_Alert_init_default      {{{NULL}, NULL}, {{NULL}, NULL}, false, transit_realtime_Alert_Cause_UNKNOWN_CAUSE, false, transit_realtime_Alert_Effect_UNKNOWN_EFFECT, false, transit_realtime_TranslatedString_init_default, false, transit_realtime_TranslatedString_init_default, false, transit_realtime_TranslatedString_init_default, NULL}
#define transit_realtime_TimeRange_init_default  {false, 0, false, 0, NULL}
#define transit_realtime_Position_init_default   {0, 0, false, 0, false, 0, false, 0, NULL}
#define transit_realtime_TripDescriptor_init_default {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, false, _transit_realtime_TripDescriptor_ScheduleRelationship_MIN, {{NULL}, NULL}, false, 0, NULL}
#define transit_realtime_VehicleDescriptor_init_default {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, NULL}
#define transit_realtime_EntitySelector_init_default {{{NULL}, NULL}, {{NULL}, NULL}, false, 0, false, transit_realtime_TripDescriptor_init_default, {{NULL}, NULL}, NULL}
#define transit_realtime_TranslatedString_init_default {{{NULL}, NULL}, NULL}
#define transit_realtime_TranslatedString_Translation_init_default {{{NULL}, NULL}, {{NULL}, NULL}, NULL}
#define transit_realtime_FeedMessage_init_zero   {transit_realtime_FeedHeader_init_zero, {{NULL}, NULL}, NULL}
#define transit_realtime_FeedHeader_init_zero    {{{NULL}, NULL}, false, _transit_realtime_FeedHeader_Incrementality_MIN, false, 0, NULL}
#define transit_realtime_FeedEntity_init_zero    {{{NULL}, NULL}, false, 0, false, transit_realtime_TripUpdate_init_zero, false, transit_realtime_VehiclePosition_init_zero, false, transit_realtime_Alert_init_zero, NULL}
#define transit_realtime_TripUpdate_init_zero    {transit_realtime_TripDescriptor_init_zero, {{NULL}, NULL}, false, transit_realtime_VehicleDescriptor_init_zero, false, 0, false, 0, NULL}
#define transit_realtime_TripUpdate_StopTimeEvent_init_zero {false, 0, false, 0, false, 0, NULL}
#define transit_realtime_TripUpdate_StopTimeUpdate_init_zero {false, 0, false, transit_realtime_TripUpdate_StopTimeEvent_init_zero, false, transit_realtime_TripUpdate_StopTimeEvent_init_zero, {{NULL}, NULL}, false, _transit_realtime_TripUpdate_StopTimeUpdate_ScheduleRelationship_MIN, NULL}
#define transit_realtime_VehiclePosition_init_zero {false, transit_realtime_TripDescriptor_init_zero, false, transit_realtime_Position_init_zero, false, 0, false, _transit_realtime_VehiclePosition_VehicleStopStatus_MIN, false, 0, false, _transit_realtime_VehiclePosition_CongestionLevel_MIN, {{NULL}, NULL}, false, transit_realtime_VehicleDescriptor_init_zero, false, _transit_realtime_VehiclePosition_OccupancyStatus_MIN, NULL}
#define transit_realtime_Alert_init_zero         {{{NULL}, NULL}, {{NULL}, NULL}, false, _transit_realtime_Alert_Cause_MIN, false, _transit_realtime_Alert_Effect_MIN, false, transit_realtime_TranslatedString_init_zero, false, transit_realtime_TranslatedString_init_zero, false, transit_realtime_TranslatedString_init_zero, NULL}
#define transit_realtime_TimeRange_init_zero     {false, 0, false, 0, NULL}
#define transit_realtime_Position_init_zero      {0, 0, false, 0, false, 0, false, 0, NULL}
#define transit_realtime_TripDescriptor_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, false, _transit_realtime_TripDescriptor_ScheduleRelationship_MIN, {{NULL}, NULL}, false, 0, NULL}
#define transit_realtime_VehicleDescriptor_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, NULL}
#define transit_realtime_EntitySelector_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, false, 0, false, transit_realtime_TripDescriptor_init_zero, {{NULL}, NULL}, NULL}
#define transit_realtime_TranslatedString_init_zero {{{NULL}, NULL}, NULL}
#define transit_realtime_TranslatedString_Translation_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, NULL}

/* Field tags (for use in manual encoding/decoding) */
#define transit_realtime_TranslatedString_translation_tag 1
#define transit_realtime_TranslatedString_Translation_text_tag 1
#define transit_realtime_TranslatedString_Translation_language_tag 2
#define transit_realtime_VehicleDescriptor_id_tag 1
#define transit_realtime_VehicleDescriptor_label_tag 2
#define transit_realtime_VehicleDescriptor_license_plate_tag 3
#define transit_realtime_Alert_active_period_tag 1
#define transit_realtime_Alert_informed_entity_tag 5
#define transit_realtime_Alert_cause_tag         6
#define transit_realtime_Alert_effect_tag        7
#define transit_realtime_Alert_url_tag           8
#define transit_realtime_Alert_header_text_tag   10
#define transit_realtime_Alert_description_text_tag 11
#define transit_realtime_FeedHeader_gtfs_realtime_version_tag 1
#define transit_realtime_FeedHeader_incrementality_tag 2
#define transit_realtime_FeedHeader_timestamp_tag 3
#define transit_realtime_Position_latitude_tag   1
#define transit_realtime_Position_longitude_tag  2
#define transit_realtime_Position_bearing_tag    3
#define transit_realtime_Position_odometer_tag   4
#define transit_realtime_Position_speed_tag      5
#define transit_realtime_TimeRange_start_tag     1
#define transit_realtime_TimeRange_end_tag       2
#define transit_realtime_TripDescriptor_trip_id_tag 1
#define transit_realtime_TripDescriptor_route_id_tag 5
#define transit_realtime_TripDescriptor_direction_id_tag 6
#define transit_realtime_TripDescriptor_start_time_tag 2
#define transit_realtime_TripDescriptor_start_date_tag 3
#define transit_realtime_TripDescriptor_schedule_relationship_tag 4
#define transit_realtime_TripUpdate_StopTimeEvent_delay_tag 1
#define transit_realtime_TripUpdate_StopTimeEvent_time_tag 2
#define transit_realtime_TripUpdate_StopTimeEvent_uncertainty_tag 3
#define transit_realtime_EntitySelector_agency_id_tag 1
#define transit_realtime_EntitySelector_route_id_tag 2
#define transit_realtime_EntitySelector_route_type_tag 3
#define transit_realtime_EntitySelector_trip_tag 4
#define transit_realtime_EntitySelector_stop_id_tag 5
#define transit_realtime_FeedMessage_header_tag  1
#define transit_realtime_FeedMessage_entity_tag  2
#define transit_realtime_TripUpdate_trip_tag     1
#define transit_realtime_TripUpdate_vehicle_tag  3
#define transit_realtime_TripUpdate_stop_time_update_tag 2
#define transit_realtime_TripUpdate_timestamp_tag 4
#define transit_realtime_TripUpdate_delay_tag    5
#define transit_realtime_TripUpdate_StopTimeUpdate_stop_sequence_tag 1
#define transit_realtime_TripUpdate_StopTimeUpdate_stop_id_tag 4
#define transit_realtime_TripUpdate_StopTimeUpdate_arrival_tag 2
#define transit_realtime_TripUpdate_StopTimeUpdate_departure_tag 3
#define transit_realtime_TripUpdate_StopTimeUpdate_schedule_relationship_tag 5
#define transit_realtime_VehiclePosition_trip_tag 1
#define transit_realtime_VehiclePosition_vehicle_tag 8
#define transit_realtime_VehiclePosition_position_tag 2
#define transit_realtime_VehiclePosition_current_stop_sequence_tag 3
#define transit_realtime_VehiclePosition_stop_id_tag 7
#define transit_realtime_VehiclePosition_current_status_tag 4
#define transit_realtime_VehiclePosition_timestamp_tag 5
#define transit_realtime_VehiclePosition_congestion_level_tag 6
#define transit_realtime_VehiclePosition_occupancy_status_tag 9
#define transit_realtime_FeedEntity_id_tag       1
#define transit_realtime_FeedEntity_is_deleted_tag 2
#define transit_realtime_FeedEntity_trip_update_tag 3
#define transit_realtime_FeedEntity_vehicle_tag  4
#define transit_realtime_FeedEntity_alert_tag    5

/* Struct field encoding specification for nanopb */
extern const pb_field_t transit_realtime_FeedMessage_fields[4];
extern const pb_field_t transit_realtime_FeedHeader_fields[5];
extern const pb_field_t transit_realtime_FeedEntity_fields[7];
extern const pb_field_t transit_realtime_TripUpdate_fields[7];
extern const pb_field_t transit_realtime_TripUpdate_StopTimeEvent_fields[5];
extern const pb_field_t transit_realtime_TripUpdate_StopTimeUpdate_fields[7];
extern const pb_field_t transit_realtime_VehiclePosition_fields[11];
extern const pb_field_t transit_realtime_Alert_fields[9];
extern const pb_field_t transit_realtime_TimeRange_fields[4];
extern const pb_field_t transit_realtime_Position_fields[7];
extern const pb_field_t transit_realtime_TripDescriptor_fields[8];
extern const pb_field_t transit_realtime_VehicleDescriptor_fields[5];
extern const pb_field_t transit_realtime_EntitySelector_fields[7];
extern const pb_field_t transit_realtime_TranslatedString_fields[3];
extern const pb_field_t transit_realtime_TranslatedString_Translation_fields[4];

/* Maximum encoded size of messages (where known) */
/* transit_realtime_FeedMessage_size depends on runtime parameters */
/* transit_realtime_FeedHeader_size depends on runtime parameters */
/* transit_realtime_FeedEntity_size depends on runtime parameters */
/* transit_realtime_TripUpdate_size depends on runtime parameters */
#define transit_realtime_TripUpdate_StopTimeEvent_size 33
/* transit_realtime_TripUpdate_StopTimeUpdate_size depends on runtime parameters */
/* transit_realtime_VehiclePosition_size depends on runtime parameters */
/* transit_realtime_Alert_size depends on runtime parameters */
#define transit_realtime_TimeRange_size          22
#define transit_realtime_Position_size           29
/* transit_realtime_TripDescriptor_size depends on runtime parameters */
/* transit_realtime_VehicleDescriptor_size depends on runtime parameters */
/* transit_realtime_EntitySelector_size depends on runtime parameters */
/* transit_realtime_TranslatedString_size depends on runtime parameters */
/* transit_realtime_TranslatedString_Translation_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define GTFS_REALTIME_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
