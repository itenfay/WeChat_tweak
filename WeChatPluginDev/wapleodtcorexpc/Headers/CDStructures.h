//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, DelayingGestureRecognizer, FlutterBasicMessageChannel, FlutterDartProject, FlutterDartVMServicePublisher, FlutterEngine, FlutterMethodChannel, FlutterPlatformPlugin, FlutterRestorationPlugin, FlutterSpellCheckPlugin, FlutterTextInputPlugin, FlutterUndoManagerPlugin, FlutterView, MISSING_TYPE, NSArray, NSData, NSDictionary, NSMapTable, NSMutableArray, NSMutableSet, NSObject, NSString, SemanticsObjectContainer, SpringAnimation, UIGestureRecognizer, UIImage, UIScrollView, UIView, UIViewController, WAEJFontDescriptor, WAEJPath, WAEJTexture, WCFinderDynamicIconFetcherResponse, WCFinderShareSpanState, WloginErrInfo, WloginUserInfo;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AAPLTextureFormatInfo {
    int _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct ABAControlParams {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    _Bool _field9;
    int _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    float _field15;
    _Bool _field16;
    _Bool _field17;
    _Bool _field18;
    float _field19;
    float _field20;
    _Bool _field21;
    int _field22;
    _Bool _field23;
    float _field24;
    float _field25;
    float _field26;
    int _field27;
    _Bool _field28;
    _Bool _field29;
};

struct AESCrypt {
    unsigned char _field1[16];
    struct aes_key_st _field2;
    int _field3;
    unsigned char _field4[16];
};

struct AMRDecodeFloat {
    void *_field1;
};

struct AMREncodeFloat;

struct ARNativeCameraFrame {
    unsigned int format;
    char *y_address;
    unsigned int y_width;
    unsigned int y_width_stride;
    unsigned int y_height;
    char *uv_address;
    char *uv_address2;
    unsigned int uv_width;
    unsigned int uv_width_stride;
    unsigned int uv_height;
    unsigned int uv_len;
    unsigned int uv_len2;
    unsigned int uv_pixel_stride;
    unsigned long long pts_ms;
    unsigned int y_texture;
    unsigned int uv_texture;
    void *cvPixelBuffer;
    int camera_position;
};

struct AccessibilityBridgeIos;

struct AccessoryCmd {
    unsigned short _field1;
    unsigned short _field2;
    long long _field3;
    struct AutoBuffer _field4;
    struct AutoBuffer _field5;
};

struct AccompanyTrack {
    CDUnknownFunctionPointerType *_vptr$AccompanyTrack;
    struct unique_ptr<audiobase::remix::AccompanyTrackImpl, std::default_delete<audiobase::remix::AccompanyTrackImpl>> _impl;
};

struct AccompanyTrackImpl;

struct AffIlinkKeeperCallback {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct AffRoamProviderDispatcherBridgeObjcImpl {
    CDUnknownFunctionPointerType *_field1;
    struct AffRoamProviderDispatcherCallback *_field2;
    id _field3;
};

struct AffRoamProviderDispatcherCallback;

struct AffStarDataManagerCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct AffStarDataManagerDispatcher;

struct AffStarManagerCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct AffStarManagerDispatcher;

struct AffStarOptManagerCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct AffStarOptManagerDispatcher;

struct AffStarSyncManagerCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct AffStarSyncManagerDispatcher;

struct AiksContext;

struct AndroidReport_t {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
};

struct AnimatorListener;

struct ApplyFileidRequestItem;

struct ArcLineCell;

struct ArcLineData {
    struct ArcLineCell **_field1;
    unsigned long long _field2;
    int *_field3;
    unsigned long long _field4;
    int _field5;
    int _field6;
    int _field7;
    float _field8;
    _Bool _field9;
    int _field10;
    int _field11;
    int _field12;
    float _field13;
    _Bool _field14;
    _Bool _field15;
    int _field16;
    int _field17;
    int _field18;
    struct Gradient *_field19;
};

struct ArrayFeatureExtractor;

struct AssetManager;

struct AudioBlock {
    float **m_data;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned long long m_channels;
    unsigned long long m_sampleRate;
};

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
};

struct AudioChannelDescription {
    unsigned int mChannelLabel;
    unsigned int mChannelFlags;
    float mCoordinates[3];
};

struct AudioChannelLayout {
    unsigned int mChannelLayoutTag;
    unsigned int mChannelBitmap;
    unsigned int mNumberChannelDescriptions;
    struct AudioChannelDescription mChannelDescriptions[1];
};

struct AudioChannels3aProcessorInterface {
    CDUnknownFunctionPointerType *_field1;
};

struct AudioCoder {
    int allow_dtx;
    void *psEnc;
    void *encControl;
    void *encStatus;
    int mEncSampleRate;
    int mPacketlenunit;
    int mEncFrameCnt;
    int mEncHasInit;
    int mNsHasInit;
    int mLastVoiceMsgFrameflag;
    int mleftdatanum;
    void *pstVAD;
    short bufpcm[5][320];
    int vadbuf[5][2];
    void *psNsx;
};

struct AudioDecodeCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct AudioDecoder {
    void *_field1;
    void *_field2;
    int _field3;
    char *_field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    void *_field10;
};

struct AudioDeviceCapCallback;

struct AudioDevicePlayCallback;

struct AudioEffectManager;

struct AudioEncodeParams {
    int num_channels;
    int sample_rate;
    int frame_length_ms;
    int bits_per_channel;
    int bitrate_bps;
    int encode_mode;
    _Bool inbandfec_enabled;
};

struct AudioFrameRingBuffer;

struct AudioHardwareSystemNotificationsCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct AudioMetadata {
    int _field1;
    int _field2;
    int _field3;
};

struct AudioMusicParam {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field3;
    int _field4;
    _Bool _field5;
    _Bool _field6;
    long long _field7;
    long long _field8;
    _Bool _field9;
};

struct AudioPacket {
    int _field1;
    struct CopyOnWriteBuffer _field2;
    struct CopyOnWriteBuffer _field3;
    unsigned int _field4;
    struct AudioPacketMetadata _field5;
    _Bool _field6;
    struct TimeTicks _field7;
    _Bool _field8;
    unsigned short _field9;
    _Bool _field10;
    int _field11;
    long long _field12;
};

struct AudioPacketMetadata {
    int _field1;
    int _field2;
    unsigned int _field3;
    int _field4;
    int _field5;
    unsigned short _field6;
    int _field7;
};

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioQueuePlayerState {
    struct OpaqueAudioQueue *_field1;
    struct AudioQueueBuffer *_field2[3];
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    _Bool _field6;
};

struct AudioSessionFactors {
    int _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
};

struct AudioSessionObserver {
    CDUnknownFunctionPointerType *_field1;
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long mStartOffset;
    unsigned int mVariableFramesInPacket;
    unsigned int mDataByteSize;
};

struct AudioTimeStamp {
    double _field1;
    unsigned long long _field2;
    double _field3;
    unsigned long long _field4;
    struct SMPTETime _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct AudioUnitCaptureDataCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct AudioUnitPlayDataCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct AutoBuffer {
    char *_field1;
    long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

struct BaseBinding;

struct BaseRC;

struct BatchSnsReqImageData;

struct BayesianProbitRegressor;

struct BeautyManagerProxy;

struct BindParameter {
    CDUnknownFunctionPointerType *_vptr$Cloneable;
    CDUnion_45fe4260 ;
    int n;
    struct StringView name;
};

struct BindStateBase;

struct BindingApp;

struct BindingsLifeCycleMgr;

struct BizBoxMrgBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BizBoxMrgCallbackBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BizDynamicCardMrgBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BizDynamicCardMrgCallbackBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BizLiveXmlObject {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3[3];
    void *_field4;
    void *_field5;
    void *_field6;
    void *_field7;
    void *_field8;
    void *_field9;
    void *_field10;
    void *_field11;
    unsigned int _field12;
    void *_field13;
    unsigned int _field14;
    void *_field15;
    void *_field16;
    void *_field17;
    unsigned int _field18;
    unsigned int _field19;
};

struct BizMainSessionBoxRedDotInfo {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3[3];
    void *_field4;
    struct BizRedDotBaseInfo *_field5;
    _Bool _field6;
    _Bool _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned long long _field10;
    _Bool _field11;
    _Bool _field12;
};

struct BizManagerBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BizManagerCallbackBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BizMsgItemContent;

struct BizMsgResortV2Context_SessionBox {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3[3];
    void *_field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
};

struct BizRedDotBaseInfo;

struct BizWechatNotifyDataChangeBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BizWechatNotifyDataChangeCallbackBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BodyConfig {
    char *_field1;
    char *_field2;
};

struct BoxInfo;

struct BrandServiceBoxMrgBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BrandServiceBoxMrgCallbackBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BrandServiceDynamicCardMrgBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BrandServiceDynamicCardMrgCallbackBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BrandServiceManagerBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BrandServiceManagerCallbackBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BrandServiceWechatNotifyDataChangeBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BrandServiceWechatNotifyDataChangeCallbackBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct BufNode {
    struct opaqueCMSampleBuffer *_field1;
    struct BufNode *_field2;
    int _field3;
};

struct BundleLoadIDKey {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct C2CDownloadRequest {
    struct shared_ptr<mars::cdn::TaskCallback> sp_callback;
    basic_string_5909a4e2 debugip;
    basic_string_5909a4e2 authkey;
    basic_string_5909a4e2 filekey;
    basic_string_5909a4e2 fileid;
    basic_string_5909a4e2 aeskey;
    basic_string_5909a4e2 savepath;
    int filetype;
    int apptype;
    int bizid;
    _Bool needreport;
    void *user_context;
    basic_string_5909a4e2 arg_info;
    int queue_timeout_seconds;
    int transfor_timeout_seconds;
    unsigned int chatnum;
    int chattype;
    basic_string_5909a4e2 expected_filemd5;
    unsigned long long expected_filesize;
    unsigned int statefile_keep_hours;
    basic_string_5909a4e2 statefile;
    unsigned long long filesize_max;
    unsigned int concurrent_count;
    basic_string_5909a4e2 custom_request_header;
    unsigned long long filesize_hint;
    int download_behavior;
    basic_string_5909a4e2 flowtag;
    unsigned int blocksize;
    _Bool issmallvideo;
    int islargesvide;
    int request_video_format;
    int videoflag_policy;
    basic_string_5909a4e2 request_videoflag;
    int predownload_ratio;
    long long predownload_minsize;
    _Bool is_hot_snsvideo;
    int videomode;
    basic_string_5909a4e2 msg_extra;
    _Bool report_detail_transinfo;
    basic_string_5909a4e2 bypass;
    basic_string_5909a4e2 finder_ctrlinfo;
    _Bool treat_as_videofile;
    _Bool is_hlsvideo;
    basic_string_5909a4e2 hls_videoflag;
    basic_string_5909a4e2 initial_decrypt_iv;
    basic_string_5909a4e2 bigfile_signture;
    basic_string_5909a4e2 fakeBigfileSignature;
    basic_string_5909a4e2 fakeBigfileSignatureAeskey;
    _Bool isstoragemode;
    _Bool isautostart;
    _Bool is_silent_task;
    struct unordered_set<mars::cdn::EMediaFormat, std::hash<mars::cdn::EMediaFormat>, std::equal_to<mars::cdn::EMediaFormat>, std::allocator<mars::cdn::EMediaFormat>> support_formats;
    long long max_retry_count;
    _Bool is_cold_snsdata;
    basic_string_5909a4e2 url;
    basic_string_5909a4e2 sns_scene;
    unsigned long long sns_decrypt_key;
    basic_string_5909a4e2 snsvideo_extradata;
    int msg_type_;
    basic_string_5909a4e2 feed_id_;
    int feed_pic_count_;
    struct vector<mars::cdn::BatchSnsReqImageData, std::allocator<mars::cdn::BatchSnsReqImageData>> batch_image_req_datas;
    basic_string_5909a4e2 referer;
    unsigned long long task_start_time;
    int certificate_policy;
    basic_string_5909a4e2 host;
    unsigned int max_http_redirect_count;
    basic_string_5909a4e2 bakup_url;
    struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> verify_headers;
    unsigned int pcdn_appid;
    int max_pcdn_connections;
    CDUnknownFunctionPointerType decoder;
    unsigned int backup_offset;
    unsigned int backup_length;
    unsigned long long initial_offset;
    unsigned long long initial_length;
    _Bool try_realtime_transport_protocol;
    basic_string_5909a4e2 ctag;
    basic_string_5909a4e2 group_key;
    int group_capacity;
    unsigned int host_resolve_priority;
    unsigned int host_resolve_flags;
};

struct C2CDownloadResult {
    int error_code;
    int detail_error_type;
    int detail_error_code;
    basic_string_5909a4e2 detail_error_msg;
    int filetype;
    basic_string_5909a4e2 filekey;
    void *user_context;
    basic_string_5909a4e2 arg_info;
    unsigned long long file_size;
    basic_string_5909a4e2 fileid;
    basic_string_5909a4e2 transfor_msg;
    basic_string_5909a4e2 trace_msg;
    basic_string_5909a4e2 filemd5;
    int video_format;
    int ori_video_format;
    basic_string_5909a4e2 recved_video_format;
    basic_string_5909a4e2 video_cdn_msg;
    unsigned long long recvedBytes;
    unsigned long long enQueueTime;
    unsigned long long startTime;
    unsigned long long endTime;
    unsigned long long firstRequestCost;
    unsigned long long firstRequestSize;
    unsigned long long firstRequestDownloadSize;
    _Bool firstRequestCompleted;
    unsigned long long averageSpeed;
    unsigned long long averageConnectCost;
    unsigned long long firstConnectCost;
    unsigned int netConnectTimes;
    unsigned int averageRtt;
    unsigned int moovRequestTimes;
    unsigned long long moovCost;
    unsigned long long moovSize;
    _Bool moovCompleted;
    int moovFailReason;
    unsigned long long previousCompletedSize;
    unsigned long long averageRequestSize;
    unsigned long long averageRequestCost;
    unsigned int requestTotalCount;
    unsigned int requestCompletedCount;
    unsigned int requestTimeoutCount;
    unsigned int svrFallbackCount;
    int httpStatusCode;
    basic_string_5909a4e2 httpResponseHeader;
    basic_string_5909a4e2 real_used_url;
    unsigned long long dns_cost_ms;
    unsigned long long queue_wait_cost_ms;
    unsigned long long connect_cost_ms;
    unsigned long long response_wait_cost_ms;
    unsigned long long response_all_cost_ms;
    basic_string_5909a4e2 client_ip;
    basic_string_5909a4e2 server_ip;
    basic_string_5909a4e2 xerrno;
    int cseq_result;
    _Bool crossNet;
    _Bool private_protocol;
    vector_bfe5b09a vUsedIp;
    unsigned short last_svrport;
    int last_nettype;
    _Bool is_resumed;
    _Bool is_sns_image_protocol_available;
    int pic_index;
    basic_string_5909a4e2 pic_cache_path;
    basic_string_5909a4e2 batch_pic_feedid;
    basic_string_5909a4e2 batch_image_file_key;
    struct vector<mars::cdn::BatchSnsReqImageData, std::allocator<mars::cdn::BatchSnsReqImageData>> batch_image_need_retry;
    long long trywrite_bytes;
    long long available_bytes;
    long long current_filesize;
    int transport_protocol;
    int transport_protocol_error;
    unsigned long long task_start_time;
    unsigned int backup_offset;
    unsigned int backup_length;
    list_ea53b405 backup_listdata;
    struct list<mars::cdn::TlvMeta, std::allocator<mars::cdn::TlvMeta>> backup_listmeta;
    struct shared_ptr<mars::cdn::SNSVideoProfile> snsvideo_profile;
    struct shared_ptr<mars::cdn::VideoInfo> sp_videoinfo;
    unsigned long long trace_id;
    basic_string_5909a4e2 profile;
};

struct C2CUploadRequest {
    struct shared_ptr<mars::cdn::TaskCallback> sp_callback;
    basic_string_5909a4e2 debugip;
    basic_string_5909a4e2 authkey;
    int bizid;
    int apptype;
    int filetype;
    basic_string_5909a4e2 filekey;
    void *user_context;
    basic_string_5909a4e2 touser;
    basic_string_5909a4e2 statefile;
    basic_string_5909a4e2 filemd5;
    _Bool needreport;
    int queue_timeout_seconds;
    int transfor_timeout_seconds;
    basic_string_5909a4e2 filepath;
    basic_string_5909a4e2 filebuffer;
    basic_string_5909a4e2 midimgPath;
    basic_string_5909a4e2 preview_video_path;
    basic_string_5909a4e2 thumb_filebuffer;
    basic_string_5909a4e2 thumb_filepath;
    int file_format;
    int mid_format;
    int preview_format;
    int upload_from;
    int compress;
    int islargesvideo;
    int videosource;
    _Bool issmallvideo;
    unsigned int concurrent_count;
    basic_string_5909a4e2 custom_request_header;
    int lasterror;
    basic_string_5909a4e2 flowtag;
    unsigned int chatnum;
    int chattype;
    _Bool check_exist_only;
    _Bool enableHitCheck;
    basic_string_5909a4e2 forward_fileid;
    basic_string_5909a4e2 forward_aeskey;
    basic_string_5909a4e2 fakeBigfileSignature;
    basic_string_5909a4e2 fakeBigfileSignatureAeskey;
    basic_string_5909a4e2 bigfile_signture;
    _Bool force_nosafecdn;
    _Bool trysafecdn;
    _Bool isstoragemode;
    _Bool sendmsg_from_cdn;
    basic_string_5909a4e2 sso_buffer_request;
    _Bool issnsadvideo;
    basic_string_5909a4e2 emoji_extinfo;
    basic_string_5909a4e2 host_;
    int port_;
    struct vector<mars::cdn::FileID, std::allocator<mars::cdn::FileID>> vfileids;
    struct vector<mars::cdn::CheckHitRequestItem, std::allocator<mars::cdn::CheckHitRequestItem>> check_hit_requests;
    struct vector<mars::cdn::ApplyFileidRequestItem, std::allocator<mars::cdn::ApplyFileidRequestItem>> apply_fileid_requests;
    _Bool try_realtime_transport_protocol;
    _Bool sns_multiphase_finish;
    int thumb_filetype;
    basic_string_5909a4e2 ctag;
};

struct CAFrameRateRange {
    float _field1;
    float _field2;
    float _field3;
};

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CFRef<CGColorSpace *> {
    struct CGColorSpace *instance_;
};

struct CFRef<__CVBuffer *> {
    struct __CVBuffer *instance_;
};

struct CFRef<__CVMetalTextureCache *> {
    struct __CVMetalTextureCache *instance_;
};

struct CFRef<__CVOpenGLESTextureCache *> {
    struct __CVOpenGLESTextureCache *instance_;
};

struct CFRef<const CGPath *> {
    struct CGPath *_field1;
};

struct CFastStr {
    char *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGAffineTransformComponents {
    struct CGSize scale;
    double horizontalShear;
    double rotation;
    struct CGVector translation;
};

struct CGColorSpace;

struct CGPath;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double dx;
    double dy;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct CPPHandle {
    struct CPPObject *_field1;
};

struct CPPHandleStatement {
    struct CPPObject *_field1;
};

struct CPPObject;

struct CRFAdjustMediumInfo {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct CXmlReader {
    int _field1;
    struct XmlReaderNode_t *_field2;
    char *_field3;
    _Bool _field4;
    _Bool _field5;
    _Bool _field6;
};

struct CachedSize {
    struct atomic<int> {
        _Atomic int _field1;
    } _field1;
};

struct CallStackPool {
    id _field1;
    unsigned int _field2;
    unsigned int _field3;
    int _field4;
    int _field5;
};

struct CaraCppConsumeSessionProphetCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraCppConsumeSessionProphetDispatcher;

struct CaraCppCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraCppDispatcher;

struct CaraCppFinderPublishProphetCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraCppFinderPublishProphetDispatcher;

struct CaraCppJoinLiveQualityProphetCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraCppJoinLiveQualityProphetDispatcher;

struct CaraCppLiveCellProphetCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraCppLiveCellProphetDispatcher;

struct CaraCppLiveFeatureCenterCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraCppLiveFeatureCenterDispatcher;

struct CaraCppLiveReddotProphetCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraCppLiveReddotProphetDispatcher;

struct CaraCppSessionFeatureCenterCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraCppSessionFeatureCenterDispatcher;

struct CaraNativeAccountFeatureCenterCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeAccountFeatureCenterDispatcher;

struct CaraNativeConsumeSessionCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeConsumeSessionDispatcher;

struct CaraNativeContactCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeContactDispatcher;

struct CaraNativeContactFeatureCenterCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeContactFeatureCenterDispatcher;

struct CaraNativeDiscoverViewFeatureCenterCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeDiscoverViewFeatureCenterDispatcher;

struct CaraNativeFeatureCenterCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeFeatureCenterDispatcher;

struct CaraNativeFinderFeatureCenterCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeFinderFeatureCenterDispatcher;

struct CaraNativeFinderPublishProphetContextCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeFinderPublishProphetContextDispatcher;

struct CaraNativeJoinLiveQualityProphetContextCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeJoinLiveQualityProphetContextDispatcher;

struct CaraNativeLiveCellProphetContextCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeLiveCellProphetContextDispatcher;

struct CaraNativeLiveFeatureCenterCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeLiveFeatureCenterDispatcher;

struct CaraNativeLiveReddotProphetContextCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeLiveReddotProphetContextDispatcher;

struct CaraNativeProphetPredictPositiveCallbackCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeProphetPredictPositiveCallbackDispatcher;

struct CaraNativeSessionFeatureCenterCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct CaraNativeSessionFeatureCenterDispatcher;

struct CasFlagLock {
    struct atomic_flag m_flag;
    unsigned long long m_count;
};

struct CategoricalMapping;

struct CdnCallback;

struct ChatLogDataItem;

struct ChatLogSessionItem;

struct CheckHitRequestItem;

struct ClarityFilter;

struct Client {
    CDUnknownFunctionPointerType *_field1;
};

struct ClientReport_t {
    char _field1[1024];
    int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    char _field12[1024];
    unsigned int _field13;
    unsigned int _field14;
    char _field15[10];
    unsigned int _field16;
    int _field17;
    char _field18[256];
    char _field19[256];
    unsigned int _field20;
    unsigned int _field21;
    int _field22;
    unsigned int _field23;
};

struct CmdBufferResultHelperOC {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct CodedInputData {
    char *_field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
};

struct CodedOutputData {
    char *_field1;
    unsigned long long _field2;
    int _field3;
};

struct Column {
    CDUnknownFunctionPointerType *_vptr$Cloneable;
    struct Schema schema;
    struct StringView table;
    _Bool wildcard;
    struct StringView name;
    struct function<const WCDB::BaseBinding *()> tableBindingRetrive;
    struct BaseBinding *tableBinding;
};

struct CommonReport_t {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct Concept;

struct ConfigMode {
    basic_string_5909a4e2 detect_model_param_;
    basic_string_5909a4e2 detect_model_bin_;
};

struct ConfigOffset {
    double graterThen;
    double point;
};

struct ConnId {
    unsigned short _field1;
};

struct ConnStatInfo {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
};

struct ConnectionCollection;

struct ContactInitSeqs {
    unsigned int currentWxcontactSeq;
    unsigned int currentChatRoomContactSeq;
};

struct ContextBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct ContextMTL;

struct CopyOnWriteBuffer {
    struct scoped_refptr<lite_base::RefCountedData<liteav::BufferT<unsigned char>>> buffer_;
    unsigned long long offset_;
    unsigned long long size_;
};

struct CppUtil;

struct CronetCallback;

struct CronetDownloadCallback;

struct CronetRequestCallback;

struct CronetTaskCallback;

struct CronetTaskParams {
    basic_string_5909a4e2 url_;
    basic_string_5909a4e2 task_id_;
    basic_string_5909a4e2 body_data_;
    char *body_data_bytes_;
    unsigned long long body_length_;
    struct vector<CronetTaskProfile::HeaderMap, std::allocator<CronetTaskProfile::HeaderMap>> headers_;
    basic_string_5909a4e2 method_;
    basic_string_5909a4e2 origin_task_id_;
    int task_type_;
    int response_type_;
    _Bool is_upload_;
    _Bool use_http2_;
    _Bool use_quic_;
    _Bool enable_brotli_;
    _Bool direct_proxy;
    _Bool use_chromium_writer_;
    _Bool need_report_;
    _Bool forbid_socket_reuse_;
    _Bool from_miniprograms_;
    int max_retry_count_;
    int max_redirect_count_;
    _Bool follow_redirect_;
    int min_tls_version_;
    _Bool ignore_ssl_error_;
    _Bool handle_data_self_;
    _Bool need_write_local_;
    _Bool download_resumption_;
    basic_string_5909a4e2 ios_tmp_path_;
    basic_string_5909a4e2 save_path_;
    _Bool force_bind_mobile_;
    _Bool weak_wifi_prefer_mobile_;
    _Bool bind_mobile_internal_task_;
    basic_string_5909a4e2 network_label_;
    struct weak_ptr<CronetTaskCallback> callback_instance_;
    struct QuicTaskProfile quic_params_;
    struct WxDownloadFileRequestParams download_file_params_;
    struct DefaultHttpParams default_params_;
    struct UploadParams upload_params_;
    _Bool use_disk_cache_;
    int disk_cache_backend_type_;
    _Bool use_memory_cache_;
    _Bool cache_request_performance_;
    int cache_max_size_;
    basic_string_5909a4e2 disk_cache_path_;
    int dns_type_;
    _Bool use_newdns_;
    _Bool dns_fail_for_debug;
    struct vector<CronetTaskProfile::HostIpMap, std::allocator<CronetTaskProfile::HostIpMap>> host_map_;
};

struct CronetTaskResult {
    _Bool use_quic_;
    _Bool use_http2_;
    int dns_type_;
    int response_type_;
    basic_string_5909a4e2 origin_task_id_;
    basic_string_5909a4e2 task_id_;
    int error_code_;
    int quic_error_code_;
    int cronet_error_code_;
    basic_string_5909a4e2 error_msg_;
    struct vector<CronetTaskProfile::HeaderMap, std::allocator<CronetTaskProfile::HeaderMap>> headers_;
    basic_string_5909a4e2 header_;
    basic_string_5909a4e2 data_;
    char *data_bytes_;
    unsigned long long data_length_;
    unsigned long long total_receive_bytes_;
    unsigned long long total_write_bytes_;
    basic_string_5909a4e2 file_save_path_;
    _Bool download_resumption_;
    int status_code_;
    basic_string_5909a4e2 status_text_;
    int total_redirect_count_;
    basic_string_5909a4e2 new_location_;
    _Bool socket_reused;
    basic_string_5909a4e2 protocol_;
    long long total_send_bytes_;
    struct WebPageNeedProfile web_profile_;
    struct WxDownloadFileProfile wx_download_file_profile_;
};

struct CronetUploadCallback;

struct CustomDecodeCallback;

struct CustomModel;

struct CustomRoamDiskDispatcherBridgeObjcImpl {
    CDUnknownFunctionPointerType *_field1;
    struct CustomRoamDiskDispatcherCallback *_field2;
    id _field3;
};

struct CustomRoamDiskDispatcherCallback;

struct CustomRoamDiskManagerDispatcherBridgeObjcImpl {
    CDUnknownFunctionPointerType *_field1;
    struct CustomRoamDiskManagerDispatcherCallback *_field2;
    id _field3;
};

struct CustomRoamDiskManagerDispatcherCallback;

struct DataBasicDescription {
    CDUnknownFunctionPointerType *_vptr$DataBasicDescription;
    int sample_rate;
    int channels;
    int bits;
};

struct DebugThreadChecker;

struct DecodeAbility {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
};

struct DecodedDataS {
    char *_field1;
    char *_field2;
    char *_field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    unsigned long long _field9;
    int _field10;
};

struct Decoder;

struct DecoderProperty {
    int _field1;
    int _field2;
};

struct DecodingInfo {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14[5];
    float _field15;
    float _field16;
    int _field17;
    int _field18;
    double _field19;
    double _field20;
    double _field21;
    double _field22;
    double _field23;
    double _field24;
    double _field25;
    double _field26;
    double _field27;
    double _field28;
    double _field29;
    float _field30;
    float _field31;
    float _field32;
};

struct DefaultHttpParams {
    int report_id_;
};

struct DelegateFlag {
    unsigned int supportSelected:1;
};

struct Detail;

struct DeviceErrorApple {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    int _field3;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field4;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field5;
};

struct DeviceManager;

struct DialReport_t {
    unsigned long long llUin;
    unsigned long long llRoomKey;
    unsigned long long iRoomId;
    unsigned int iRoomMemberId;
    unsigned int iStopStatus;
    int iReqRet;
    int iReserve;
    int iUsedTime;
    unsigned char isCanConnect;
    unsigned char isGotPeerId;
    unsigned char isGotStrategy;
    unsigned char isConnected;
    unsigned char isCanTalk;
    unsigned char isGotCapInfo;
    unsigned char isTalked;
    unsigned int iDoubleLinkSwitchReqCnt;
    unsigned int iDoubleLinkSwitchSucToDirectCnt;
    unsigned int iDoubleLinkSwitchSucToRelayCnt;
    unsigned int iEncryptStrategy;
    unsigned int iQosStrategy;
    unsigned int iQualityRedirectReqCnt;
    unsigned int iQualityDoRedirectCnt;
    unsigned int iTcpSwitchThreshold;
    unsigned int iCloudAppId;
    unsigned int iCloudHwpId;
    basic_string_5909a4e2 appid;
    basic_string_5909a4e2 sub_appid;
};

struct DictVectorizer;

struct DisplayData;

struct DlCanvas;

struct DlImage;

struct DlPaint;

struct DownloadInfo {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct EcsManagerCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct EcsManagerDispatcher;

struct EffectAnalysisChain {
    struct vector<std::shared_ptr<audiobase::fx::ProcessorBase>, std::allocator<std::shared_ptr<audiobase::fx::ProcessorBase>>> m_processors;
    struct function<bool (const std::string &, const std::string &, unsigned long, const audiobase::fx::AudioBlock &)> m_dumpWavCallBack;
    unsigned long long m_routerTag;
    struct vector<std::pair<unsigned long, std::string>, std::allocator<std::pair<unsigned long, std::string>>> m_vaildRouterTag;
    basic_string_5909a4e2 m_name;
    struct EffectConfigParser m_chainConfig;
    struct atomic<bool> m_isManageRouter;
    struct atomic<bool> m_needToClearContext;
    struct function<void (unsigned long, const audiobase::fx::parameter::Parameter &, audiobase::fx::parameter::Category)> m_callback;
    _Bool m_isFakeStereo;
    unsigned long long m_state;
    struct HeapBlock<short, false> m_buffer;
    void *m_ebur128;
};

struct EffectChain {
    struct vector<std::shared_ptr<audiobase::fx::ProcessorBase>, std::allocator<std::shared_ptr<audiobase::fx::ProcessorBase>>> m_processors;
    struct function<bool (const std::string &, const std::string &, unsigned long, const audiobase::fx::AudioBlock &)> m_dumpWavCallBack;
    unsigned long long m_routerTag;
    struct vector<std::pair<unsigned long, std::string>, std::allocator<std::pair<unsigned long, std::string>>> m_vaildRouterTag;
    basic_string_5909a4e2 m_name;
    struct EffectConfigParser m_chainConfig;
    struct atomic<bool> m_isManageRouter;
    struct atomic<bool> m_needToClearContext;
    struct function<void (unsigned long, const audiobase::fx::parameter::Parameter &, audiobase::fx::parameter::Category)> m_callback;
    _Bool m_isFakeStereo;
};

struct EffectChainConfig;

struct EffectConfigParser {
    struct vector<audiobase::fx::EffectChainConfig, std::allocator<audiobase::fx::EffectChainConfig>> m_chainConfigs;
    struct vector<audiobase::fx::EffectScaleStageConfig, std::allocator<audiobase::fx::EffectScaleStageConfig>> m_stageConfigs;
    struct vector<audiobase::fx::EffectScaleStageConfig, std::allocator<audiobase::fx::EffectScaleStageConfig>> m_pluggedConfigs;
    struct vector<audiobase::fx::EffectSliderConfig, std::allocator<audiobase::fx::EffectSliderConfig>> m_sliderConfigs;
    struct vector<audiobase::fx::EffectSliderConfig, std::allocator<audiobase::fx::EffectSliderConfig>> m_builtInSliderConfigs;
    struct pair<float, float> m_vocTargerLoundness;
    struct pair<float, float> m_accTargerLoundness;
    basic_string_5909a4e2 m_effectName;
};

struct EffectContext {
    struct AudioBlock m_inputBlock;
    struct AudioBlock m_outputBlock;
    float **m_input;
    float **m_output;
    unsigned long long m_capacity;
    unsigned long long m_channels;
    unsigned long long m_sampleRate;
    _Bool m_isReplacing;
    _Bool m_isFakeStereo;
    struct map<unsigned long, audiobase::base::AudioSampleBuffer *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, audiobase::base::AudioSampleBuffer *>>> m_routers;
};

struct EffectGraph<audiobase::fx::EffectGraphImplBeta> {
    CDUnknownFunctionPointerType *_vptr$EffectGraph;
    struct EffectGraphImplBeta m_impl;
};

struct EffectGraph<audiobase::fx::EffectGraphImplStable> {
    CDUnknownFunctionPointerType *_vptr$EffectGraph;
    struct EffectGraphImplStable m_impl;
};

struct EffectGraphImplBeta {
    CDUnknownFunctionPointerType *_vptr$EffectGraphImplBase;
    struct vector<audiobase::fx::EffectChain, std::allocator<audiobase::fx::EffectChain>> m_chains;
    struct CasFlagLock m_mutex;
    struct EffectConfigParser m_graphConfig;
    struct function<void (audiobase::fx::ProcessStage, unsigned long, const audiobase::fx::parameter::Parameter &, audiobase::fx::parameter::Category)> m_callback;
    struct atomic<audiobase::fx::RecordStageType> m_recordStage;
    struct atomic<bool> m_isPlugged;
    struct atomic<bool> m_needToClearContext;
    struct vector<audiobase::fx::EffectChain, std::allocator<audiobase::fx::EffectChain>> m_replaceChains;
    struct HeapBlock<float, false> m_window;
    struct atomic<unsigned long> m_fadeInCount;
    struct atomic<unsigned long> m_fadeOutCount;
};

struct EffectGraphImplStable {
    CDUnknownFunctionPointerType *_vptr$EffectGraphImplBase;
    struct vector<audiobase::fx::EffectChain, std::allocator<audiobase::fx::EffectChain>> m_chains;
    struct CasFlagLock m_mutex;
    struct EffectConfigParser m_graphConfig;
    struct function<void (audiobase::fx::ProcessStage, unsigned long, const audiobase::fx::parameter::Parameter &, audiobase::fx::parameter::Category)> m_callback;
    struct atomic<audiobase::fx::RecordStageType> m_recordStage;
    struct atomic<bool> m_isPlugged;
    struct atomic<bool> m_needToClearContext;
};

struct EffectScaleStageConfig;

struct EffectSliderConfig;

struct EmoticonDesignerPortfolioPackDataSourceCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct EmoticonDesignerPortfolioPackDataSourceDispatcher;

struct EmoticonFinderDesignerDataSourceCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct EmoticonFinderDesignerDataSourceDispatcher;

struct EmoticonMetaStorageCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct EmoticonMetaStorageDispatcher;

struct EncDecPrams {
    double duration;
    double startTime;
    double rate;
    double originalFrameRate;
    int frameDropInterval;
    int rotate;
    int outVideoBitrate;
    int decodeWidth;
    int decodeHeight;
    int cropLeft;
    int cropTop;
    int cropWidth;
    int cropHeight;
    double nowPts;
    double frameTimeInterval;
    _Bool skipAudioEncoding;
    struct WXAVRational audioTb;
    struct WXAVRational videoTb;
    double beginPtsVideo;
    double endPtsVideo;
    double beginPtsAudio;
    double endPtsAudio;
    _Bool useTimeCrop;
    _Bool useResCrop;
};

struct EncodeAbility {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
};

struct Encoder;

struct Event4XReporter;

struct ExpandUIConfig;

struct FTS5AuxiliaryFunctionModule {
    CDUnknownFunctionPointerType _field1;
    void *_field2;
};

struct FaceConfig {
    char *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
};

struct FastFocusEngie {
    struct unique_ptr<FFE::FastFocusEngie::Impl, std::default_delete<FFE::FastFocusEngie::Impl>> mspImpl;
};

struct FeatureVectorizer;

struct FileID;

struct FileInfo;

struct FileUpdateReq {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                union {
                    struct __long {
                        char *_field1;
                        unsigned long long _field2;
                        unsigned long long _field3;
                    } _field1;
                    struct __short {
                        char _field1[23];
                        struct {
                            unsigned char _field1;
                        } _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field1;
    int _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                union {
                    struct __long {
                        char *_field1;
                        unsigned long long _field2;
                        unsigned long long _field3;
                    } _field1;
                    struct __short {
                        char _field1[23];
                        struct {
                            unsigned char _field1;
                        } _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field3;
};

struct Filter {
    CDUnknownFunctionPointerType *_vptr$Cloneable;
    struct Shadow<WCDB::Syntax::Expression> expression;
};

struct FinderQoEReporter {
    int playerStatus;
    int bandwidthStatus;
    int preloadStatus;
    int averageSpeed;
    int currentMaxBitrate;
    float bufferCounting;
    float moovTime;
    float firstFrameTime;
    _Bool setMaxBitrateIsConfidence;
    int mQoEChangeStatusLimit;
    int preloadDurationQoE;
    int videoStreamLimitBufferCount;
    int adajustUpNum;
    int adajustDownNum;
};

struct FlutterPlatformViewsController;

struct FrameInfo {
    int _field1;
    int _field2;
    _Bool _field3;
    _Bool _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned long long _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct FrameSpec {
    CDUnknownFunctionPointerType *_vptr$Cloneable;
    CDUnion_45fe4260 ;
    char event;
    char firstEvent;
    char secondEvent;
    _Bool between;
    struct Shadow<WCDB::Syntax::Expression> expression1;
    struct Shadow<WCDB::Syntax::Expression> expression2;
};

struct FullTokenizer;

struct GLMClassifier;

struct GLMRegressor;

struct GOGImageFeatureItem {
    id _field1;
    id _field2;
    id _field3;
};

struct GOGVideoFeatureItem {
    id _field1;
    unsigned int _field2;
    id _field3;
    unsigned int _field4;
};

struct GPUMatrix3x3 {
    struct GPUVector3 _field1;
    struct GPUVector3 _field2;
    struct GPUVector3 _field3;
};

struct GPUMatrix4x4 {
    struct GPUVector4 one;
    struct GPUVector4 two;
    struct GPUVector4 three;
    struct GPUVector4 four;
};

struct GPUTextureOptions {
    unsigned int minFilter;
    unsigned int magFilter;
    unsigned int wrapS;
    unsigned int wrapT;
    unsigned int internalFormat;
    unsigned int format;
    unsigned int type;
    _Bool useDepth;
};

struct GPUVector2 {
    float _field1;
    float _field2;
};

struct GPUVector3 {
    float _field1;
    float _field2;
    float _field3;
};

struct GPUVector4 {
    float one;
    float two;
    float three;
    float four;
};

struct GPUWorkflowShader {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct GameEngineApp {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    struct mutex _field3;
    struct OpaqueJSContext *_field4;
    void *_field5;
    id _field6;
};

struct Gazetteer;

struct Get3rdDnsCallback;

struct GfxHandler {
    CDUnknownFunctionPointerType *_vptr$IGfxHandler;
    id delegate;
    unsigned int current_buffer_id_;
    struct unordered_map<int, _NativeBuffer, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, _NativeBuffer>>> native_buffers_;
};

struct GrDirectContext;

struct Gradient {
    int _field1;
    char *_field2;
    struct RGBColor *_field3;
};

struct GradientStep {
    double stepValue[2];
};

struct Group {
    long long _field1;
    id _field2;
};

struct HTMLCanvasViewNG;

struct HandConfig {
    char *_field1;
    char *_field2;
};

struct Handle<std::shared_ptr<kinda::CppUtil>> {
    struct shared_ptr<kinda::CppUtil> m_obj;
};

struct Handle<std::shared_ptr<kinda::IAppKinda>> {
    struct shared_ptr<kinda::IAppKinda> m_obj;
};

struct Handle<std::shared_ptr<kinda::IAsyncTask>> {
    struct shared_ptr<kinda::IAsyncTask> m_obj;
};

struct Handle<std::shared_ptr<kinda::ITransmitKvData>> {
    struct shared_ptr<kinda::ITransmitKvData> m_obj;
};

struct Handle<std::shared_ptr<kinda::IUIModal>> {
    struct shared_ptr<kinda::IUIModal> m_obj;
};

struct Handle<std::shared_ptr<kinda::IUIPage>> {
    struct shared_ptr<kinda::IUIPage> m_obj;
};

struct Handle<std::shared_ptr<kinda::KBankCardTypePickerViewOnSelectCallback>> {
    struct shared_ptr<kinda::KBankCardTypePickerViewOnSelectCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KBankEditViewOnSeletBankCallback>> {
    struct shared_ptr<kinda::KBankEditViewOnSeletBankCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KCardNumberEditViewOnTextChangedCallback>> {
    struct shared_ptr<kinda::KCardNumberEditViewOnTextChangedCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KCardNumberEditViewOnTextEndEditingCallback>> {
    struct shared_ptr<kinda::KCardNumberEditViewOnTextEndEditingCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KCardTypePickerViewOnSelectCallback>> {
    struct shared_ptr<kinda::KCardTypePickerViewOnSelectCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KCgi>> {
    struct shared_ptr<kinda::KCgi> m_obj;
};

struct Handle<std::shared_ptr<kinda::KCountPickerViewOnSelectCallback>> {
    struct shared_ptr<kinda::KCountPickerViewOnSelectCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KCountryCallingCodeViewOnSelectCallback>> {
    struct shared_ptr<kinda::KCountryCallingCodeViewOnSelectCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KDatePickerViewOnSelectCallback>> {
    struct shared_ptr<kinda::KDatePickerViewOnSelectCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KEditTextOnEditorActionCallback>> {
    struct shared_ptr<kinda::KEditTextOnEditorActionCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KEditTextOnFocusChangeCallback>> {
    struct shared_ptr<kinda::KEditTextOnFocusChangeCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KEditTextOnTextBeginChangeCallback>> {
    struct shared_ptr<kinda::KEditTextOnTextBeginChangeCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KEditTextOnTextChangedCallback>> {
    struct shared_ptr<kinda::KEditTextOnTextChangedCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KEditTextOnTextEndEditingCallback>> {
    struct shared_ptr<kinda::KEditTextOnTextEndEditingCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KHorizontalScrollViewOnScrollCallback>> {
    struct shared_ptr<kinda::KHorizontalScrollViewOnScrollCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KListViewCallback>> {
    struct shared_ptr<kinda::KListViewCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KListViewOnScrollCallback>> {
    struct shared_ptr<kinda::KListViewOnScrollCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KNetworkMockManager>> {
    struct shared_ptr<kinda::KNetworkMockManager> m_obj;
};

struct Handle<std::shared_ptr<kinda::KPatternLockViewEndWithPatternCallback>> {
    struct shared_ptr<kinda::KPatternLockViewEndWithPatternCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KPatternLockViewOnInputInvalidPatternCallback>> {
    struct shared_ptr<kinda::KPatternLockViewOnInputInvalidPatternCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KProfessionEditViewOnSelectProfessionCallback>> {
    struct shared_ptr<kinda::KProfessionEditViewOnSelectProfessionCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KPwdInputViewOnEndEnterPasswordCallback>> {
    struct shared_ptr<kinda::KPwdInputViewOnEndEnterPasswordCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KPwdInputViewOnPasswordChangeCallback>> {
    struct shared_ptr<kinda::KPwdInputViewOnPasswordChangeCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KRegionEditViewOnRegionSelectedCallback>> {
    struct shared_ptr<kinda::KRegionEditViewOnRegionSelectedCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KScrollViewOnScrollCallback>> {
    struct shared_ptr<kinda::KScrollViewOnScrollCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KSecureEditTextOnTextChangedCallback>> {
    struct shared_ptr<kinda::KSecureEditTextOnTextChangedCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KSwitchViewOnChangeSwitchCallback>> {
    struct shared_ptr<kinda::KSwitchViewOnChangeSwitchCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KTableViewCellEditAction>> {
    struct shared_ptr<kinda::KTableViewCellEditAction> m_obj;
};

struct Handle<std::shared_ptr<kinda::KTableViewCellManager>> {
    struct shared_ptr<kinda::KTableViewCellManager> m_obj;
};

struct Handle<std::shared_ptr<kinda::KValidDatePickerViewOnSelectCallback>> {
    struct shared_ptr<kinda::KValidDatePickerViewOnSelectCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KViewOnClickCallback>> {
    struct shared_ptr<kinda::KViewOnClickCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KViewOnLongClickCallback>> {
    struct shared_ptr<kinda::KViewOnLongClickCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::KViewOnTouchCallback>> {
    struct shared_ptr<kinda::KViewOnTouchCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::TenpayCgiCallback>> {
    struct shared_ptr<kinda::TenpayCgiCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::UseCase>> {
    struct shared_ptr<kinda::UseCase> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidBinaryI32Callback>> {
    struct shared_ptr<kinda::VoidBinaryI32Callback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidBoolCallback>> {
    struct shared_ptr<kinda::VoidBoolCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidBoolI32Callback>> {
    struct shared_ptr<kinda::VoidBoolI32Callback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidBoolOptionCallback>> {
    struct shared_ptr<kinda::VoidBoolOptionCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidBoolStringCallback>> {
    struct shared_ptr<kinda::VoidBoolStringCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidBoolStringI32StringCallback>> {
    struct shared_ptr<kinda::VoidBoolStringI32StringCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidCallback>> {
    struct shared_ptr<kinda::VoidCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidF32F32BoolCallback>> {
    struct shared_ptr<kinda::VoidF32F32BoolCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidI64Callback>> {
    struct shared_ptr<kinda::VoidI64Callback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidITransmitKvDataCallback>> {
    struct shared_ptr<kinda::VoidITransmitKvDataCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidITransmitKvDataNoticeItemCallback>> {
    struct shared_ptr<kinda::VoidITransmitKvDataNoticeItemCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidKRectCallback>> {
    struct shared_ptr<kinda::VoidKRectCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidListCallback>> {
    struct shared_ptr<kinda::VoidListCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidStringBinaryCallback>> {
    struct shared_ptr<kinda::VoidStringBinaryCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidStringBoolCallback>> {
    struct shared_ptr<kinda::VoidStringBoolCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidStringCallback>> {
    struct shared_ptr<kinda::VoidStringCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidStringStringBinaryCallback>> {
    struct shared_ptr<kinda::VoidStringStringBinaryCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidStringStringCallback>> {
    struct shared_ptr<kinda::VoidStringStringCallback> m_obj;
};

struct Handle<std::shared_ptr<kinda::VoidStringStringStringCallback>> {
    struct shared_ptr<kinda::VoidStringStringStringCallback> m_obj;
};

struct Handle<std::shared_ptr<luggage::LiteAppReporter>> {
    struct shared_ptr<luggage::LiteAppReporter> m_obj;
};

struct Hardware {
    int _field1;
};

struct HardwareBuffer;

struct HardwareBufferTexture;

struct HardwareCallbackImpl;

struct HardwareManager;

struct HardwareManagerEventCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct HashTable {
    unsigned int *_field1;
};

struct HeadImgUseSceneConfig {
    unsigned char _field1;
    Class _field2;
    id _field3;
    _Bool _field4;
    struct CGSize _field5;
    unsigned int _field6;
    unsigned char _field7;
};

struct HeadInfo;

struct HeaderMap;

struct HeapBlock<float, false> {
    float *data;
};

struct HeapBlock<short, false> {
    short *data;
};

struct HeatmapCell;

struct HeatmapData {
    struct HeatmapCell **_field1;
    unsigned long long _field2;
    int *_field3;
    unsigned long long _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    float _field10;
    _Bool _field11;
    _Bool _field12;
    int _field13;
    int _field14;
    float _field15;
    float _field16;
    float _field17;
    _Bool _field18;
    _Bool _field19;
    int _field20;
    struct Gradient *_field21;
};

struct HolderBase {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    struct OpaqueJSContext *_field3;
};

struct HostIpMap;

struct IAggregatable;

struct IAppKinda;

struct IAsyncTask;

struct IBindingApp {
    CDUnknownFunctionPointerType *_field1;
};

struct IGfxHandler {
    CDUnknownFunctionPointerType *_field1;
};

struct ILinkPusherAudioDataCallback;

struct ILiveConEngine {
    struct LiveConEngine *_field1;
};

struct IMBNativeInterface {
    CDUnknownFunctionPointerType *_field1;
};

struct IMVQQEngine {
    CDUnknownFunctionPointerType *_field1;
};

struct IMediaSdkWrapper {
    CDUnknownFunctionPointerType *_field1;
};

struct INetCmdSendOnly {
    CDUnknownFunctionPointerType *_field1;
};

struct IOSCanvasViewDelegateGL;

struct IPAddress {
    struct IPAddressBytes _field1;
};

struct IPAddressBytes {
    struct array<unsigned char, 16UL> _field1;
    unsigned char _field2;
};

struct IPEndPoint {
    struct IPAddress _field1;
    unsigned short _field2;
};

struct ISpeedTestChannel {
    CDUnknownFunctionPointerType *_field1;
};

struct IStreamEncryptAndDecrypt {
    CDUnknownFunctionPointerType *_field1;
};

struct ITPAudioRouteManagerCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct ITPPlayer {
    CDUnknownFunctionPointerType *_field1;
};

struct ITPPlayerConnectionMgr {
    CDUnknownFunctionPointerType *_field1;
};

struct ITPPlayerRichMediaAsyncRequester;

struct ITPPlayerRichMediaProcessor;

struct ITPRendererInterruptCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct ITPSubtitleParser {
    CDUnknownFunctionPointerType *_field1;
};

struct ITPTemporyImageConverter;

struct ITXLiteAVVideoDecoder {
    CDUnknownFunctionPointerType *_field1;
};

struct ITransmitKvData;

struct ITransportChannel {
    CDUnknownFunctionPointerType *_field1;
};

struct IUIModal;

struct IUIPage;

struct IWXConfAudioCallback;

struct IWXConfCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct IWXConfService {
    CDUnknownFunctionPointerType *_field1;
};

struct IWasmAdaptor;

struct IWasmContext;

struct IWasmGlueAdaptor {
    CDUnknownFunctionPointerType *_field1;
};

struct IWasmLinker {
    CDUnknownFunctionPointerType *_field1;
    struct IWasmLinkerImpl *_field2;
};

struct IWasmLinkerImpl;

struct Identifier;

struct Identity;

struct IlinkLogCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct IlinkSDKCloudSessionCallback;

struct ImageDecodeCache;

struct ImagePlane {
    int _field1;
    int _field2;
    int _field3;
    void *_field4;
    void *_field5[4];
    long long _field6[4];
};

struct Imp;

struct Impl;

struct Imputer;

struct InStream;

struct InferenceSession;

struct InnerDatabase;

struct InnerHandle;

struct InternalMetadataWithArenaLite {
    void *_field1;
};

struct IsolateConfiguration;

struct Item;

struct ItemSimilarityRecommender;

struct JSCRemoteConnectionToTarget {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct KBankCardTypePickerViewOnSelectCallback;

struct KBankEditViewOnSeletBankCallback;

struct KCardNumberEditViewOnTextChangedCallback;

struct KCardNumberEditViewOnTextEndEditingCallback;

struct KCardTypePickerViewOnSelectCallback;

struct KCgi;

struct KCountPickerViewOnSelectCallback;

struct KCountryCallingCodeViewOnSelectCallback;

struct KDatePickerViewOnSelectCallback;

struct KEditTextOnEditorActionCallback;

struct KEditTextOnFocusChangeCallback;

struct KEditTextOnTextBeginChangeCallback;

struct KEditTextOnTextChangedCallback;

struct KEditTextOnTextEndEditingCallback;

struct KHorizontalScrollViewOnScrollCallback;

struct KListViewCallback;

struct KListViewOnScrollCallback;

struct KNearestNeighborsClassifier;

struct KNetworkMockManager;

struct KPatternLockViewEndWithPatternCallback;

struct KPatternLockViewOnInputInvalidPatternCallback;

struct KProfessionEditViewOnSelectProfessionCallback;

struct KPwdInputViewOnEndEnterPasswordCallback;

struct KPwdInputViewOnPasswordChangeCallback;

struct KRegionEditViewOnRegionSelectedCallback;

struct KSJSONDecodeCallbacks {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
};

struct KSStackCursor {
    struct {
        unsigned long long _field1;
        char *_field2;
        unsigned long long _field3;
        char *_field4;
        unsigned long long _field5;
    } _field1;
    struct {
        int _field1;
        _Bool _field2;
    } _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6[100];
};

struct KScrollViewOnScrollCallback;

struct KSecureEditTextOnTextChangedCallback;

struct KSwitchViewOnChangeSwitchCallback;

struct KTableViewCellEditAction;

struct KTableViewCellManager;

struct KValidDatePickerViewOnSelectCallback;

struct KViewOnClickCallback;

struct KViewOnLongClickCallback;

struct KViewOnTouchCallback;

struct KeyValueHolder {
    unsigned short _field1;
    unsigned short _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct LSMFileItem {
    unsigned int _field1;
    unsigned char _field2[32];
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned char _field6[0];
};

struct LVUICallback;

struct Layer;

struct LayerCompositer;

struct LightColor {
    float _field1;
    float _field2;
    float _field3;
};

struct LinkReportData {
    _Bool clicked;
    _Bool expousred;
};

struct LinkedModel;

struct LiteAppRecorderData {
    id _field1;
    id _field2;
    struct AudioStreamBasicDescription _field3;
    struct OpaqueAudioQueue *_field4;
    struct AudioQueueBuffer *_field5[3];
    id _field6;
};

struct LiteAppReporter;

struct LiteralValue {
    CDUnknownFunctionPointerType *_vptr$Cloneable;
    CDUnion_45fe4260 ;
    struct StringView stringValue;
    union {
        double floatValue;
        long long integerValue;
        unsigned long long unsignedIntegerValue;
        _Bool boolValue;
    } ;
};

struct LiveConEngine;

struct LiveMixStream {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    unsigned int _field9;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field10;
};

struct LiveSpeedTestResult {
    _Bool ping_rtt_successful;
    _Bool upload_successful;
    _Bool download_successful;
    _Bool only_upload_done;
    float avg_ping_rtt_;
    float ping_jitter_;
    int avg_down_speed_;
    int max_down_speed_;
    int min_down_speed_;
    int avg_up_speed_;
    int max_up_speed_;
    int min_up_speed_;
    int task_id_;
};

struct LiveTranscodingConfig {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field15;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field16;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field17;
    struct vector<liteav::live::LiveMixStream, std::allocator<liteav::live::LiveMixStream>> _field18;
};

struct Lock {
    struct LockImpl lock_;
};

struct LockImpl {
    struct _opaque_pthread_mutex_t native_handle_;
};

struct LockStepCallback {
    CDUnknownFunctionPointerType *_field1;
    void *_field2;
};

struct LockStepScriptState {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    struct OpaqueJSContext *_field3;
    long long _field4;
};

struct Log {
    vector_8ca568ff mv_x_list;
    vector_8ca568ff mv_y_list;
    vector_8ca568ff variance_list;
    vector_8ca568ff variance_thres_list;
    vector_8ca568ff scancls_noise_list;
    vector_8ca568ff scancls_object_list;
    vector_8ca568ff scancls_landmark_list;
    float t_det_avg;
    float t_det_max;
    struct vector<FFE::BoxInfo, std::allocator<FFE::BoxInfo>> top1_box_list;
    int num_Tentative;
    int num_MaxScore2Confirmed;
    int num_Tentative2Confirmed;
    int num_Tentative2Deleted;
    int num_Confirmed2Miss;
    int num_Miss2Deleted;
    int num_Miss2Confirmed;
    int num_Doudi;
};

struct MBCronetDownloadCallback;

struct MBTcpScriptState {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    struct OpaqueJSContext *_field3;
    long long _field4;
};

struct MBUdpScriptState {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    struct OpaqueJSContext *_field3;
    long long _field4;
};

struct MCOffsetRange {
    double location;
    double length;
};

struct MD5_CTX;

struct MJTimeScaleList {
    struct vector<MJTimeRulerScale *, std::allocator<MJTimeRulerScale *>> scales;
    long long currentIndex;
};

struct MMBizMatchInfo {
    long long _field1;
    long long _field2;
    int _field3;
    int _field4;
};

struct MMDates {
    long long year;
    long long month;
    long long day;
};

struct MMDiskUsageBizRule {
    long long _field1;
    long long _field2;
    id _field3;
    long long _field4;
    int _field5;
    int _field6;
    int _field7;
};

struct MMEdgeTipsViewConfig {
    id _field1;
    id _field2;
    id _field3;
    int _field4;
};

struct MMIlinkCheckResourceNetworkCallback {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct MMKVMetaInfo {
    unsigned int m_crcDigest;
    unsigned int m_version;
    unsigned int m_sequence;
    unsigned char m_vector[16];
    unsigned long long m_actualSize;
    struct {
        unsigned long long lastActualSize;
        unsigned int lastCRCDigest;
        unsigned int __reserved[16];
    } m_lastConfirmedMetaInfo;
    unsigned long long m_flags;
};

struct MMMetricsUploadFileObserver {
    CDUnknownFunctionPointerType *_field1;
};

struct MMMetricsUploadFileObserver2;

struct MMSMUploadFileObserver {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct MMSMUploadFileObserver2;

struct MMSafeModeInfo {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    long long _field5;
    int _field6;
    int _field7;
    _Bool _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    int _field12;
    char *_field13;
};

struct MMTextLayoutParam {
    struct CGSize size;
    unsigned long long lineBreakStrategy;
    long long lineBreak;
};

struct MNXNetRuntime;

struct MSize {
    int *p;
};

struct MStep {
    unsigned long long *p;
    unsigned long long buf[2];
};

struct MTLResourceID {
    unsigned long long _field1;
};

struct MapBitmapTileID {
    int _field1;
    int _field2;
    int _field3;
    char _field4[256];
};

struct MapCircleInfo {
    union MapVector2d _field1;
    float _field2;
    float _field3;
    union MapVector4ub _field4;
    union MapVector4ub _field5;
    float _field6;
    _Bool _field7;
    _Bool _field8;
    char _field9;
    union MapVector2f _field10;
    int _field11;
};

struct MapEdgeInsets {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct MapHoleInfo;

struct MapLocation {
    double _field1;
    double _field2;
};

struct MapMarkerIconInfo {
    int _field1;
    char _field2[512];
    union MapVector2d _field3;
    union MapVector2f _field4;
    float _field5;
    float _field6;
    union MapVector2f _field7;
    _Bool _field8;
    _Bool _field9;
    int _field10;
    _Bool _field11;
};

struct MapPatternStyle;

struct MapPrimitive {
    int _field1;
    union MapVector4ub _field2;
    float _field3;
    int _field4;
    union MapVector2d _field5;
    union MapVector2d *_field6;
    union MapVector4ub _field7;
    struct MapHoleInfo *_field8;
    int _field9;
    double _field10;
    int _field11;
    int _field12;
    int *_field13;
    struct MapPatternStyle *_field14;
    int _field15;
};

struct MapRectD {
    union MapVector2d _field1;
    union MapVector2d _field2;
};

struct MapRectF {
    union MapVector2f _field1;
    union MapVector2f _field2;
};

struct MapTileID {
    int _field1;
    int _field2;
    int _field3;
    char *_field4;
    int _field5;
    int _field6;
    int _field7;
};

struct Mapping;

struct Marker4KInfo {
    struct TMRect _field1;
    void *_field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    char *_field7;
    int _field8;
    int _field9;
    int _field10;
    union MapVector2d *_field11;
    int _field12;
};

struct Mat {
    int flags;
    int dims;
    int rows;
    int cols;
    char *data;
    int *refcount;
    char *datastart;
    char *dataend;
    char *datalimit;
    struct MatAllocator *allocator;
    struct MSize size;
    struct MStep step;
};

struct MatAllocator;

struct Matrix4x4<float> {
    float m[16];
};

struct MatrixStackInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3[128];
    unsigned long long _field4;
};

struct Md5Hash {
    unsigned char _field1[16];
    struct MD5_CTX *_field2;
};

struct Memory {
    char *_field1;
    unsigned int _field2;
};

struct MixedTranscodingConfig {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field15;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field16;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field17;
    struct vector<trtc::MixedUserConfig, std::allocator<trtc::MixedUserConfig>> _field18;
};

struct MixedUserConfig {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field2;
    int _field3;
    unsigned int _field4;
    _Bool _field5;
    int _field6;
    int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field12;
    unsigned int _field13;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field14;
};

struct Model {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArenaLite _field2;
    struct ModelDescription *_field3;
    int _field4;
    _Bool _field5;
    union TypeUnion _field6;
    struct CachedSize _field7;
    unsigned int _field8[1];
};

struct ModelDesc {
    struct map<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc, std::less<std::string>, std::allocator<std::pair<const std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>>> inputDescs;
    struct map<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc, std::less<std::string>, std::allocator<std::pair<const std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>>> outputDescs;
};

struct ModelDescription;

struct Monitor {
    struct Tracker _field1;
    struct CallStackPool _field2;
    struct _opaque_pthread_t *_field3;
    unsigned int _field4;
    CDUnknownFunctionPointerType _field5;
    struct timeval _field6;
    struct OpaqueJSContextGroup *_field7;
    unsigned int _field8;
    float _field9;
    float _field10;
    int _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    unsigned char _field15;
};

struct MonoDepthConfig {
    char *_field1;
    char *_field2;
};

struct MouseState {
    struct CGPoint location;
    struct CGPoint last_translation;
};

struct MsgPlayingReportInfo {
    int _field1;
    int _field2;
    int _field3;
};

struct MsgStartPlayArgs {
    _Bool _field1;
    _Bool _field2;
};

struct MsgStopPlayArgs {
    id _field1;
    id _field2;
};

struct MyCallback;

struct MyImage {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    struct MyRect _field6;
    int _field7;
    char *_field8;
    _Bool _field9;
};

struct MyRect {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct NSDictionary {
    Class _field1;
};

struct NativePixelFrame;

struct NativeRenderCanvasHost {
    CDUnknownFunctionPointerType *_field1;
    _Bool _field2;
    unsigned int _field3;
    unsigned int _field4;
    int _field5;
    int _field6;
    int _field7;
    struct RenderingContext *_field8;
};

struct NetworkManagerBridge {
    CDUnknownFunctionPointerType *_field1;
};

struct NeuralNetwork;

struct NeuralNetworkClassifier;

struct NeuralNetworkRegressor;

struct NewAVExtReport_t {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
};

struct NewDirectReport {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    unsigned int _field40;
    unsigned int _field41;
    unsigned int _field42;
    unsigned int _field43;
    unsigned int _field44;
    unsigned int _field45;
    unsigned int _field46;
    unsigned int _field47;
    unsigned int _field48;
    unsigned int _field49;
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    unsigned int _field54;
    unsigned long long _field55;
    unsigned long long _field56;
    unsigned int _field57;
    int _field58;
    unsigned int _field59;
    unsigned int _field60;
    unsigned int _field61;
    unsigned int _field62;
    char _field63[46];
    char _field64[46];
    char _field65[46];
    unsigned short _field66;
    unsigned short _field67;
    unsigned short _field68;
    unsigned int _field69;
    unsigned int _field70;
    unsigned int _field71;
    char _field72[16];
};

struct NewRelayReport {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    unsigned int _field40;
    unsigned int _field41;
    unsigned int _field42;
    unsigned int _field43;
    unsigned int _field44;
    unsigned int _field45;
    unsigned int _field46;
    unsigned int _field47;
    unsigned int _field48;
    unsigned int _field49;
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    unsigned int _field54;
    unsigned int _field55;
    int _field56;
    int _field57;
    int _field58;
    int _field59;
    int _field60;
    char _field61[46];
    char _field62[46];
    char _field63[46];
    unsigned int _field64;
    unsigned int _field65;
    unsigned int _field66;
    unsigned int _field67;
};

struct NonMaximumSuppression;

struct NormalBufferWrap {
    unsigned long long _field1;
    void *_field2;
};

struct Normalizer;

struct NtpService {
    CDUnknownFunctionPointerType *_field1;
};

struct OCRConfig {
    char *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
};

struct OSDConfig {
    char *_field1;
    char *_field2;
    char *_field3;
};

struct ObjHolder;

struct ObjHolder2;

struct ObjectRef<rfx::RfxAssetManager> {
    struct RfxAssetManager *mpObject;
};

struct ObjectRef<rfx::RfxContext> {
    struct RfxContext *mpObject;
};

struct ObjectRef<rfx::RfxMaterial> {
    struct RfxMaterial *mpObject;
};

struct ObjectRef<rfx::RfxPipelineStateCache> {
    struct RfxPipelineStateCache *mpObject;
};

struct ObjectRef<rfx::RfxShaderLibrary> {
    struct RfxShaderLibrary *mpObject;
};

struct ObjectRef<rfx::RfxTexture> {
    struct RfxTexture *mpObject;
};

struct ObjectRef<xnet::rci::RciBufferBlock> {
    struct RciBufferBlock *mpObject;
};

struct ObjectRef<xnet::rci::RciRenderDevice> {
    struct RciRenderDevice *mpObject;
};

struct ObjectRef<xnet::rci::RciSwapChain> {
    struct RciSwapChain *mpObject;
};

struct ObjectRef<xnet::rci::RciTexture> {
    struct RciTexture *mpObject;
};

struct ObjectRef<xnet::rci::RciVertexInput> {
    struct RciVertexInput *mpObject;
};

struct OcrApi;

struct OnceCallback<void (liteav::HttpClient::State, const liteav::HttpClient::Request &, std::unique_ptr<liteav::HttpClient::Response>)> {
    struct scoped_refptr<lite_base::internal::BindStateBase> _field1;
};

struct OneHotEncoder;

struct OnePassEncInfo {
    int _field1;
    int _field2;
    int _field3;
    double _field4;
    double _field5[4];
    double _field6[4];
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    struct vector<unsigned long long, std::allocator<unsigned long long>> _field11;
};

struct OnlineLogger;

struct OpaqueAudioComponentInstance;

struct OpaqueAudioFileID;

struct OpaqueAudioQueue;

struct OpaqueJSContext;

struct OpaqueJSContextGroup;

struct OpaqueJSValue;

struct Optional<WCDB::Syntax::FrameSpec> {
    _Bool m_hasValue;
    union {
        char m_nullState;
        struct FrameSpec m_value;
    } ;
};

struct Optional<int> {
    struct OptionalStorage<int, true, true> storage_;
};

struct Optional<liteav::audio::AudioFrame> {
    struct OptionalStorage<liteav::audio::AudioFrame, false, false> _field1;
};

struct Optional<liteav::audio::AudioPacket> {
    struct OptionalStorage<liteav::audio::AudioPacket, false, false> _field1;
};

struct Optional<liteav::trtc::internal::TRTCVideoResolution> {
    struct OptionalStorage<liteav::trtc::internal::TRTCVideoResolution, true, true> _field1;
};

struct Optional<liteav::trtc::internal::TRTCVideoResolutionMode> {
    struct OptionalStorage<liteav::trtc::internal::TRTCVideoResolutionMode, true, true> _field1;
};

struct Optional<liteav::video::EncoderStrategy> {
    struct OptionalStorage<liteav::video::EncoderStrategy, true, true> _field1;
};

struct Optional<liteav::video::FillMode> {
    struct OptionalStorage<liteav::video::FillMode, true, true> _field1;
};

struct Optional<liteav::video::MirrorMode> {
    struct OptionalStorage<liteav::video::MirrorMode, true, true> _field1;
};

struct Optional<liteav::video::RcMethod> {
    struct OptionalStorage<liteav::video::RcMethod, true, true> _field1;
};

struct Optional<liteav::video::VideoRotation> {
    struct OptionalStorage<liteav::video::VideoRotation, true, true> _field1;
};

struct Optional<unsigned int> {
    struct OptionalStorage<unsigned int, true, true> _field1;
};

struct Optional<unsigned long> {
    _Bool _field1;
    union {
        char _field1;
        unsigned long long _field2;
    } _field2;
};

struct OptionalStorage<bool, true, true> {
    _Bool _field1;
    CDUnion_2739e4df _field2;
};

struct OptionalStorage<int, true, true> {
    _Bool is_populated_;
    CDUnion_073fe123 ;
};

struct OptionalStorage<liteav::audio::AudioFrame, false, false> {
    _Bool _field1;
    union {
        char _field1;
        struct AudioFrame {
            struct CopyOnWriteBuffer _field1;
            struct CopyOnWriteBuffer _field2;
            struct AudioMetadata _field3;
            unsigned int _field4;
            short _field5;
            _Bool _field6;
        } _field2;
    } _field2;
};

struct OptionalStorage<liteav::audio::AudioPacket, false, false> {
    _Bool _field1;
    union {
        char _field1;
        struct AudioPacket _field2;
    } _field2;
};

struct OptionalStorage<liteav::trtc::internal::TRTCVideoResolution, true, true> {
    _Bool _field1;
    CDUnion_073fe123 _field2;
};

struct OptionalStorage<liteav::trtc::internal::TRTCVideoResolutionMode, true, true> {
    _Bool _field1;
    CDUnion_073fe123 _field2;
};

struct OptionalStorage<liteav::video::EncoderStrategy, true, true> {
    _Bool _field1;
    CDUnion_073fe123 _field2;
};

struct OptionalStorage<liteav::video::FillMode, true, true> {
    _Bool _field1;
    CDUnion_073fe123 _field2;
};

struct OptionalStorage<liteav::video::MirrorMode, true, true> {
    _Bool _field1;
    CDUnion_073fe123 _field2;
};

struct OptionalStorage<liteav::video::RcMethod, true, true> {
    _Bool _field1;
    CDUnion_073fe123 _field2;
};

struct OptionalStorage<liteav::video::VideoRotation, true, true> {
    _Bool _field1;
    CDUnion_073fe123 _field2;
};

struct OptionalStorage<unsigned int, true, true> {
    _Bool _field1;
    union {
        char _field1;
        unsigned int _field2;
    } _field2;
};

struct Options {
    int numThreads;
    basic_string_5909a4e2 modelCachePath;
    basic_string_5909a4e2 gpuLibFilename;
    struct map<std::string, std::vector<int>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<int>>>> typicalShape;
    _Bool allowQuantize;
    _Bool allowGPU;
    _Bool allowNPU;
    _Bool useNpuOnly;
    basic_string_5909a4e2 modelType;
    int precisionLevel;
};

struct OutStream;

struct PAGAnimator;

struct PAGDecoder;

struct PAGImage;

struct PAGLayer;

struct PAGSurface;

struct PBCGIHelperWrap {
    Class _field1;
    Class _field2;
    int _field3;
    unsigned int _field4;
    id _field5;
    id _field6;
};

struct PLzmaSDKProgressDelegate;

struct POPAnimatorItem;

struct PSTNChannelAdapter {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct PSTNNetNotifier {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct PageConfig;

struct PageInfo {
    unsigned int success_;
    unsigned int app_uuid_;
    unsigned long long app_ptr_;
    unsigned long long page_id_;
    unsigned long long render_id_;
    basic_string_5909a4e2 base_path_;
    basic_string_5909a4e2 page_url_;
    int flags_;
    int page_orientation_;
    _Bool is_preload_;
};

struct PaintContext {
    struct DlCanvas *_field1;
    struct GrDirectContext *_field2;
    struct AiksContext *_field3;
    struct DlPaint *_field4;
};

struct Passport {
    int _field1;
    int _field2;
    int _field3;
    struct vector<ocrlite::Point2f, std::allocator<ocrlite::Point2f>> _field4;
    struct vector<ocrlite::Point2f, std::allocator<ocrlite::Point2f>> _field5;
};

struct PerformanceInfo {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    long long _field7;
};

struct PersonalParam {
    struct QBarImageInfo _field1;
    struct QBarImageInfo _field2;
    struct QBarImageInfo _field3;
    struct QBarImageInfo _field4;
    struct QBarImageInfo _field5;
    struct QBarImageInfo _field6;
    int _field7;
    struct QBarImageInfo _field8;
    _Bool _field9;
};

struct Phys3DScriptState {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    struct OpaqueJSContext *_field3;
};

struct Pipeline;

struct PipelineClassifier;

struct PipelineInterface {
    CDUnknownFunctionPointerType *_field1;
};

struct PipelineRegressor;

struct PitchDetect;

struct PixelBufferPool;

struct PixelFrameMetaData;

struct PlatformData {
    struct unordered_map<long long, flutter::ViewportMetrics, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, flutter::ViewportMetrics>>> _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field3;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field4;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field5;
    vector_bfe5b09a _field6;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field7;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field8;
    _Bool _field9;
    _Bool _field10;
    int _field11;
    struct vector<flutter::DisplayData, std::allocator<flutter::DisplayData>> _field12;
};

struct PlatformMessageHandler;

struct PlatformParams {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
};

struct PlatformView;

struct Player {
    CDUnknownFunctionPointerType *_field1;
};

struct PlayerState {
    id _field1;
    unsigned int _field2;
    unsigned long long _field3;
    struct AudioStreamBasicDescription _field4;
    struct OpaqueAudioQueue *_field5;
    struct AudioQueueBuffer *_field6[3];
    unsigned int _field7;
    long long _field8;
    unsigned int _field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    id _field15;
    unsigned int _field16;
    id _field17;
    struct AMRDecodeFloat *_field18;
    id _field19;
    id _field20;
    unsigned int _field21;
    struct AudioStreamPacketDescription *_field22;
    struct OpaqueAudioFileID *_field23;
    id _field24;
    struct AudioDecoder *_field25;
    unsigned int _field26;
    short *_field27;
    unsigned int _field28;
    unsigned int _field29;
    id _field30;
};

struct Point2f;

struct PointerData {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    long long _field12;
    long long _field13;
    long long _field14;
    double _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    double _field20;
    double _field21;
    double _field22;
    double _field23;
    double _field24;
    double _field25;
    double _field26;
    long long _field27;
    double _field28;
    double _field29;
    double _field30;
    double _field31;
    double _field32;
    double _field33;
    double _field34;
    double _field35;
    long long _field36;
};

struct PointerDataPacket;

struct PreviewCoverItem;

struct ProfilerMetricsIOS;

struct PstnAndroidReport_t {
    int _field1;
    char _field2[256];
    char _field3[256];
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
};

struct PtsPostProc;

struct PushNetworkConfig {
    basic_string_5909a4e2 url;
    int channel_type;
    _Bool enable_pure_audio_mode;
    _Bool enable_realtime;
    _Bool enable_video_flow_control;
    int retry_limit;
    int retry_interval_ms;
    int qos_type;
    int audio_codec_type_;
};

struct Pusher {
    CDUnknownFunctionPointerType *_field1;
};

struct QBAR_AREA {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct QBAR_IMAGE {
    int _field1;
    int _field2;
    struct vector<unsigned char, std::allocator<unsigned char>> _field3;
};

struct QBAR_INFO;

struct QBAR_ML_MODE {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field3;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field4;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field5;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field6;
};

struct QBAR_MODE {
    int _field1;
    int _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field3;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
    struct QBAR_OPT _field10;
    struct QBAR_ML_MODE _field11;
};

struct QBAR_OPT {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
};

struct QBAR_POINT;

struct QBAR_REPORT_MSG {
    int qrcodeVersion;
    int pyramidLv;
    basic_string_5909a4e2 binaryMethod;
    basic_string_5909a4e2 ecLevel;
    basic_string_5909a4e2 charsetMode;
    basic_string_5909a4e2 scale_list_;
    float decode_scale_;
    unsigned int detect_time_;
    unsigned int sr_time_;
    _Bool has_sr;
    unsigned int decode_time_;
    _Bool in_white_list_;
    _Bool in_black_list_;
    unsigned int pre_detect_time_;
    unsigned int detect_infer_pre_time_;
    unsigned int detect_infer_time_;
    unsigned int detect_infer_after_time_;
    unsigned int after_detect_time_;
    unsigned int seg_time_;
    _Bool has_seg;
    unsigned int after_seg_time_;
    unsigned int decode_all_time_;
    _Bool has_decode;
};

struct QBAR_RESULT {
    int _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field3;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field4;
    vector_d4107ee0 _field5;
    struct QBAR_AREA _field6;
    struct QBAR_REPORT_MSG _field7;
    int _field8;
};

struct QBar {
    struct QBarDecode *_field1;
};

struct QBarDecode;

struct QBarImageInfo {
    char *_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct QuicForceHost;

struct QuicHostMap;

struct QuicTaskProfile {
    struct vector<CronetTaskProfile::QuicHostMap, std::allocator<CronetTaskProfile::QuicHostMap>> quic_map_host;
    struct vector<CronetTaskProfile::QuicForceHost, std::allocator<CronetTaskProfile::QuicForceHost>> quic_force_host;
};

struct RGBAColor {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct RGBAImage {
    void *_field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
};

struct RPSFramerateCallback;

struct RTEAttachmentNativeItemCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct RTEAttachmentNativeItemDispatcher;

struct RaiseFunction {
    CDUnknownFunctionPointerType *_vptr$Cloneable;
    CDUnion_45fe4260 ;
    struct StringView errorMessage;
};

struct RawYuvData;

struct RciBufferBlock;

struct RciRenderDevice;

struct RciSwapChain;

struct RciTexture;

struct RciVertexInput;

struct ReasonModel {
    id _field1;
    int _field2;
};

struct RecorderState {
    id _field1;
    struct AudioStreamBasicDescription _field2;
    struct OpaqueAudioQueue *_field3;
    struct AudioQueueBuffer *_field4[3];
    unsigned int _field5;
    long long _field6;
    long long _field7;
    struct OpaqueAudioFileID *_field8;
    _Bool _field9;
    unsigned int _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    id _field14;
    id _field15;
    id _field16;
    struct AMREncodeFloat *_field17;
    _Bool _field18;
    id _field19;
    id _field20;
    struct OpaqueAudioFileID *_field21;
    unsigned int _field22;
    unsigned int _field23;
    id _field24;
    unsigned char _field25[1280];
    int _field26;
    _Bool _field27;
    struct AudioCoder *_field28;
    _Bool _field29;
    long long _field30;
};

struct Rect {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct Recyclable<WCDB::InnerDatabase *> {
    CDUnknownFunctionPointerType *_vptr$Referenced;
    struct shared_ptr<std::atomic<int>> m_reference;
    struct InnerDatabase *m_value;
    struct function<void (WCDB::InnerDatabase *&)> m_onRecycled;
};

struct RecyclableHandle {
    CDUnknownFunctionPointerType *_vptr$Referenced;
    struct shared_ptr<std::atomic<int>> m_reference;
    struct shared_ptr<WCDB::InnerHandle> m_value;
    struct function<void (std::shared_ptr<WCDB::InnerHandle>&)> m_onRecycled;
    struct InnerHandle *m_handle;
};

struct RefPtr<fml::TaskRunner> {
    struct TaskRunner *_field1;
};

struct RefPtr<fml::WeakContainer> {
    struct WeakContainer *ptr_;
};

struct RefPtr<fml::internal::WeakPtrFlag> {
    struct WeakPtrFlag *ptr_;
};

struct RelayTcpReport {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    char _field40[46];
    char _field41[46];
    char _field42[46];
};

struct RemoteAudioSelectorParams {
    unsigned int _field1;
    vector_bfe5b09a _field2;
    _Bool _field3;
};

struct RenderElement;

struct RenderModel;

struct RenderOptions {
    struct CGSize size;
    double scale;
    double rotation;
    double opacity;
    struct optional<wesvg::RGBAColor> color;
};

struct RenderParams {
    struct Optional<liteav::video::FillMode> _field1;
    struct Optional<liteav::video::MirrorMode> _field2;
    struct Optional<liteav::video::VideoRotation> _field3;
    struct Optional<bool> {
        struct OptionalStorage<bool, true, true> _field1;
    } _field4;
};

struct RenderTarget {
    CDUnknownFunctionPointerType *_field1;
    struct WxGL *_field2;
    struct RenderTargetAttribute _field3;
};

struct RenderTargetAttribute {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
};

struct RenderingContext;

struct RepeatedPtrField<std::string> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatingCallback<void (liteav::HttpClient::State, const liteav::HttpClient::Request &, std::unique_ptr<liteav::HttpClient::Response>)> {
    struct scoped_refptr<lite_base::internal::BindStateBase> _field1;
};

struct ReportStaticPrams {
    int errorCode;
    double decodeTime;
    double scaleTime;
    double encodeTime;
    double DSETime;
    double remuxTime;
    int videoFrames;
    int audioFrames;
    int newVideoFrames;
    _Bool skipAudioEncoding;
    int videoCodecID;
    int audioCodecID;
    double outVideoBitrate;
};

struct Request;

struct RerankStrategy {
    float _field1;
    int _field2;
    float _field3;
    float _field4;
    float _field5;
};

struct ResourceLoader;

struct Response {
    short _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                union {
                    struct __long {
                        char *_field1;
                        unsigned long long _field2;
                        unsigned long long _field3;
                    } _field1;
                    struct __short {
                        char _field1[23];
                        struct {
                            unsigned char _field1;
                        } _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field2;
    struct vector<qmapkit::Mapsdk_trafficevent::Detail, std::allocator<qmapkit::Mapsdk_trafficevent::Detail>> _field3;
};

struct RfxAssetManager;

struct RfxContext;

struct RfxImageCropFilter;

struct RfxImageView;

struct RfxMaterial;

struct RfxPagFile;

struct RfxPagPlayer;

struct RfxPagSurface;

struct RfxPipelineStateCache;

struct RfxPushConstantID {
    shared_ptr_b119579c mspMemberIdx;
};

struct RfxRenderGraph;

struct RfxShaderLibrary;

struct RfxTexture;

struct RfxThreadPool;

struct RoamBackupPackageManagerCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct RoamBackupPackageManagerDispatcher;

struct RoamBackupperCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct RoamBackupperDispatcher;

struct RoamDeviceManagerCppCover {
    CDUnknownFunctionPointerType *_vptr$RoamDeviceManagerDispatcherEvent;
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
    NSMapTable *connectivityChangedEventMap;
};

struct RoamDeviceManagerDispatcher;

struct RoamManagerCppCover {
    CDUnknownFunctionPointerType *_vptr$RoamManagerDispatcherEvent;
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
    NSMapTable *deviceDiscoveredEventMap;
    NSMapTable *autoBackupEventEventMap;
    NSMapTable *deleteBackupDataProgressEventMap;
    NSMapTable *resumeQuitedTaskEventEventMap;
    NSMapTable *deviceStartConnectEventMap;
};

struct RoamManagerDispatcher;

struct RoamMediaFormatterCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct RoamMediaFormatterDispatcher;

struct RoamTaskCppCover {
    CDUnknownFunctionPointerType *_vptr$RoamTaskDispatcherEvent;
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
    NSMapTable *progressEventMap;
    NSMapTable *stateChangedEventMap;
    NSMapTable *conversationCompletedEventMap;
    NSMapTable *taskCompletedEventMap;
    NSMapTable *downgradeScheduledEventMap;
    NSMapTable *transferStatsChangedEventMap;
};

struct RoamTaskDispatcher;

struct RoiConfigInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned char _field5;
};

struct RouteChangeDetails {
    unsigned long long _field1;
    id _field2;
};

struct RunConfiguration {
    struct unique_ptr<flutter::IsolateConfiguration, std::default_delete<flutter::IsolateConfiguration>> _field1;
    struct shared_ptr<flutter::AssetManager> _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field3;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field4;
    vector_bfe5b09a _field5;
};

struct RuntimeDelegate {
    CDUnknownFunctionPointerType *_field1;
};

struct SCNVector4 {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct SDKPageReportInfo {
    long long pageId;
    NSString *pageName;
    NSDictionary *pageReportParams;
};

struct SDKReportInfo {
    NSString *viewId;
    CDUnknownBlockType paramsBlock;
    int commentScene;
    long long proto;
    struct SDKPageReportInfo pageInfo;
};

struct SMPTETime {
    short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
};

struct SNSVideoProfile;

struct SRDelegateAvailableMethods {
    unsigned int didReceiveMessage:1;
    unsigned int didReceiveMessageWithString:1;
    unsigned int didReceiveMessageWithData:1;
    unsigned int didOpen:1;
    unsigned int didFailWithError:1;
    unsigned int didCloseWithCode:1;
    unsigned int didReceivePong:1;
    unsigned int shouldConvertTextFrameToString:1;
};

struct SS;

struct SSData;

struct STIDKeyInfo;

struct SamplingProfiler;

struct ScalarFunctionModule {
    CDUnknownFunctionPointerType _field1;
    int _field2;
    _Bool _field3;
    void *_field4;
};

struct Scaler;

struct ScheduledAudioSlice {
    struct AudioTimeStamp _field1;
    CDUnknownFunctionPointerType _field2;
    void *_field3;
    unsigned int _field4;
    unsigned int _field5;
    void *_field6;
    unsigned int _field7;
    struct AudioBufferList *_field8;
};

struct Schema {
    CDUnknownFunctionPointerType *_vptr$Cloneable;
    struct StringView name;
};

struct ScopedTypeRef<NSString *(^)(), fml::internal::ScopedBlockTraits<NSString *(^)()>> {
    CDUnknownBlockType object_;
};

struct ScopedTypeRef<bool (^)(), fml::internal::ScopedBlockTraits<bool (^)()>> {
    CDUnknownBlockType object_;
};

struct ScopedTypeRef<double (^)(), fml::internal::ScopedBlockTraits<double (^)()>> {
    CDUnknownBlockType object_;
};

struct ScopedTypeRef<void (^)(), fml::internal::ScopedBlockTraits<void (^)()>> {
    CDUnknownBlockType object_;
};

struct Scorer {
    struct unique_ptr<tsk::score::Scorer::Impl, std::default_delete<tsk::score::Scorer::Impl>> impl_;
};

struct Screenshot {
    struct sk_sp<SkData> _field1;
    struct SkISize _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field3;
    int _field4;
};

struct SectionFrame;

struct SectionItems {
    CDUnknownBlockType _field1;
    id _field2;
};

struct SelectSTMT;

struct SemanticsNode {
    int id;
    int flags;
    int actions;
    int maxValueLength;
    int currentValueLength;
    int textSelectionBase;
    int textSelectionExtent;
    int platformViewId;
    int scrollChildren;
    int scrollIndex;
    double scrollPosition;
    double scrollExtentMax;
    double scrollExtentMin;
    double elevation;
    double thickness;
    basic_string_5909a4e2 identifier;
    basic_string_5909a4e2 label;
    struct vector<std::shared_ptr<flutter::StringAttribute>, std::allocator<std::shared_ptr<flutter::StringAttribute>>> labelAttributes;
    basic_string_5909a4e2 hint;
    struct vector<std::shared_ptr<flutter::StringAttribute>, std::allocator<std::shared_ptr<flutter::StringAttribute>>> hintAttributes;
    basic_string_5909a4e2 value;
    struct vector<std::shared_ptr<flutter::StringAttribute>, std::allocator<std::shared_ptr<flutter::StringAttribute>>> valueAttributes;
    basic_string_5909a4e2 increasedValue;
    struct vector<std::shared_ptr<flutter::StringAttribute>, std::allocator<std::shared_ptr<flutter::StringAttribute>>> increasedValueAttributes;
    basic_string_5909a4e2 decreasedValue;
    struct vector<std::shared_ptr<flutter::StringAttribute>, std::allocator<std::shared_ptr<flutter::StringAttribute>>> decreasedValueAttributes;
    basic_string_5909a4e2 tooltip;
    int textDirection;
    struct SkRect rect;
    struct SkM44 transform;
    vector_cd3186ef childrenInTraversalOrder;
    vector_cd3186ef childrenInHitTestOrder;
    vector_cd3186ef customAccessibilityActions;
};

struct Shadow<WCDB::Syntax::Expression> {
    struct shared_ptr<WCDB::Syntax::Expression> m_payload;
    _Bool m_isPrivate;
};

struct Shadow<WCDB::Syntax::Identifier> {
    struct shared_ptr<WCDB::Syntax::Identifier> m_payload;
    _Bool m_isPrivate;
};

struct Shadow<WCDB::Syntax::SelectSTMT> {
    struct shared_ptr<WCDB::Syntax::SelectSTMT> m_payload;
    _Bool m_isPrivate;
};

struct SharedPtr<XAKAsset> {
    struct XAKAsset *_field1;
};

struct SharedPtr<XCSMediaFileInputSettings> {
    struct XCSMediaFileInputSettings *_field1;
};

struct SharedPtr<XDSInputManager> {
    struct XDSInputManager *_ptr;
};

struct SharedPtr<XIKImage> {
    struct XIKImage *_ptr;
};

struct SharedPtr<XLinearValueMapper<XTMTime, double>> {
    void *_ptr;
};

struct SharedPtr<XLinearValueMapper<double, XTMTime>> {
    void *_ptr;
};

struct SharedPtr<XMFASRProcessor> {
    struct XMFASRProcessor *_ptr;
};

struct SharedPtr<XMFAudioAutoVolumeCalculator> {
    struct XMFAudioAutoVolumeCalculator *_ptr;
};

struct SharedPtr<XMFAudioTrack> {
    struct XMFAudioTrack *_ptr;
};

struct SharedPtr<XMFAudioWaveformGenF32> {
    struct XMFAudioWaveformGenF32 *_ptr;
};

struct SharedPtr<XMFClip> {
    struct XMFClip *_field1;
};

struct SharedPtr<XMFCombinedCurveTimingFunc> {
    struct XMFCombinedCurveTimingFunc *_ptr;
};

struct SharedPtr<XMFDecibelHeightCalcF32> {
    struct XMFDecibelHeightCalcF32 *_ptr;
};

struct SharedPtr<XMFFrameCreatorApple> {
    struct XMFFrameCreatorApple *_ptr;
};

struct SharedPtr<XMFImageFileClip> {
    struct XMFImageFileClip *_field1;
};

struct SharedPtr<XMFImageTrack> {
    struct XMFImageTrack *_ptr;
};

struct SharedPtr<XMFMediaFile> {
    struct XMFMediaFile *_ptr;
};

struct SharedPtr<XMFVideoClip> {
    struct XMFVideoClip *_ptr;
};

struct SharedPtr<XMFVideoClipThumbGen> {
    struct XMFVideoClipThumbGen *_ptr;
};

struct SharedPtr<XMFVideoClipThumbGenKeyframeImpl> {
    struct XMFVideoClipThumbGenKeyframeImpl *_ptr;
};

struct SharedPtr<XMFVideoFrame> {
    struct XMFVideoFrame *_field1;
};

struct SharedPtr<XMFVideoFrameCocoaLoader> {
    struct XMFVideoFrameCocoaLoader *_ptr;
};

struct SharedPtr<XMFVideoTrack> {
    struct XMFVideoTrack *_ptr;
};

struct SharedPtr<XMJBridgeCDNService> {
    struct XMJBridgeCDNService *_ptr;
};

struct SharedPtr<XMJCamResourceManager> {
    struct XMJCamResourceManager *_ptr;
};

struct SharedPtr<XMJCamSession> {
    struct XMJCamSession *_ptr;
};

struct SharedPtr<XMJCamoSession> {
    struct XMJCamoSession *_ptr;
};

struct SharedPtr<XMJCaptureSession> {
    struct XMJCaptureSession *_ptr;
};

struct SharedPtr<XMJClipSegment> {
    struct XMJClipSegment *_ptr;
};

struct SharedPtr<XMJExportManager> {
    struct XMJExportManager *_ptr;
};

struct SharedPtr<XMJLowerThirdImageGenerator> {
    struct XMJLowerThirdImageGenerator *_ptr;
};

struct SharedPtr<XMJMaterialCategory> {
    struct XMJMaterialCategory *_ptr;
};

struct SharedPtr<XMJMaterialInfo> {
    struct XMJMaterialInfo *_ptr;
};

struct SharedPtr<XMJMaterialManager> {
    struct XMJMaterialManager *_ptr;
};

struct SharedPtr<XMJMovieComposingSessionDelegate> {
    struct XMJMovieComposingSessionDelegate *_ptr;
};

struct SharedPtr<XMJMovieSessionV3> {
    struct XMJMovieSessionV3 *_ptr;
};

struct SharedPtr<XMJSegment> {
    struct XMJSegment *_ptr;
};

struct SharedPtr<XMJServiceManager> {
    struct XMJServiceManager *_ptr;
};

struct SharedPtr<XMJSpeechManager> {
    struct XMJSpeechManager *_ptr;
};

struct SharedPtr<XMJStickerSegment> {
    struct XMJStickerSegment *_ptr;
};

struct SharedPtr<XMJTextSegment> {
    struct XMJTextSegment *_ptr;
};

struct SharedPtr<XMSCaptionSegment> {
    struct XMSCaptionSegment *_field1;
};

struct SharedPtr<XMSClipSegment> {
    struct XMSClipSegment *_field1;
};

struct SharedPtr<XMSComposingSession> {
    struct XMSComposingSession *_ptr;
};

struct SharedPtr<XMSContentDescSegment> {
    struct XMSContentDescSegment *_field1;
};

struct SharedPtr<XMSElementSegment> {
    struct XMSElementSegment *_field1;
};

struct SharedPtr<XMSEmoticonSegment> {
    struct XMSEmoticonSegment *_field1;
};

struct SharedPtr<XMSExportSettings> {
    struct XMSExportSettings *_field1;
};

struct SharedPtr<XMSFancyTextSegment> {
    struct XMSFancyTextSegment *_field1;
};

struct SharedPtr<XMSMovieTitleSegment> {
    struct XMSMovieTitleSegment *_field1;
};

struct SharedPtr<XMSMusicSegment> {
    struct XMSMusicSegment *_field1;
};

struct SharedPtr<XMSNarrationSegment> {
    struct XMSNarrationSegment *_field1;
};

struct SharedPtr<XMSPlaybackSession> {
    struct XMSPlaybackSession *_ptr;
};

struct SharedPtr<XMSPlaybackWindowCon> {
    struct XMSPlaybackWindowCon *_ptr;
};

struct SharedPtr<XMSProject> {
    struct XMSProject *_ptr;
};

struct SharedPtr<XMSSegment> {
    struct XMSSegment *_field1;
};

struct SharedPtr<XMSStoryline> {
    struct XMSStoryline *_field1;
};

struct SharedPtr<XMSTransitionDesc> {
    struct XMSTransitionDesc *_ptr;
};

struct SharedPtr<XMSTransitionSegment> {
    struct XMSTransitionSegment *_field1;
};

struct SharedPtr<XMSWhenWhereSegment> {
    struct XMSWhenWhereSegment *_field1;
};

struct SharedPtr<XPiecewiseValueMapper<XTMTime, double, kDoubleNan>> {
    void *_ptr;
};

struct SharedPtr<XPiecewiseValueMapper<double, XTMTime, kTMInvalidTime>> {
    void *_ptr;
};

struct SharedPtr<XVCExportSession> {
    struct XVCExportSession *_ptr;
};

struct SharedPtr<XVCGIFToVideoConverter> {
    struct XVCGIFToVideoConverter *_ptr;
};

struct SharedPtr<XVIOnDemandPreprocManager> {
    struct XVIOnDemandPreprocManager *_ptr;
};

struct SharedPtr<XVIPreprocManager> {
    struct XVIPreprocManager *_ptr;
};

struct SharedPtr<XVIPreprocTask> {
    struct XVIPreprocTask *_field1;
};

struct SharedPtr<plzma::Decoder> {
    struct Decoder *_ptr;
};

struct SharedPtr<plzma::Encoder> {
    struct Encoder *_ptr;
};

struct SharedPtr<plzma::InStream> {
    struct InStream *_ptr;
};

struct SharedPtr<plzma::Item> {
    struct Item *_ptr;
};

struct SharedPtr<plzma::OutStream> {
    struct OutStream *_ptr;
};

struct SharpenFilter;

struct Shell;

struct ShoeConfig {
    char *_field1;
    char *_field2;
};

struct SilkResampler;

struct SilkResamplerWrapper;

struct SingleThreadTaskRunner;

struct SkData;

struct SkISize {
    int _field1;
    int _field2;
};

struct SkImage;

struct SkM44 {
    float fMat[16];
};

struct SkMatrix {
    float _field1[9];
    int _field2;
};

struct SkPath {
    struct sk_sp<SkPathRef> fPathRef;
    int fLastMoveToIndex;
    struct atomic<unsigned char> fConvexity;
    struct atomic<unsigned char> fFirstDirection;
    unsigned int fFillType:2;
    unsigned int fIsVolatile:1;
};

struct SkPathRef;

struct SkPoint {
    float _field1;
    float _field2;
};

struct SkRRect {
    struct SkRect _field1;
    struct SkPoint _field2[4];
    int _field3;
};

struct SkRect {
    float fLeft;
    float fTop;
    float fRight;
    float fBottom;
};

struct SkSurface;

struct SoundAnalysisPreprocessing;

struct SpeedTestParams {
    unsigned int _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field3;
    _Bool _field4;
    int _field5;
    int _field6;
};

struct StWxAMFrame {
    char *_field1[4];
    unsigned long long _field2[4];
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    char *_field9;
};

struct StackInfo {
    unsigned long long **_field1;
    int *_field2;
};

struct Statement {
    CDUnknownFunctionPointerType *_field1;
    struct Identifier *_field2;
    struct shared_ptr<WCDB::StringView> _field3;
    _Bool _field4;
    struct Shadow<WCDB::Syntax::Identifier> _field5;
};

struct StatementDelete {
    CDUnknownFunctionPointerType *_vptr$SQL;
    struct Identifier *m_syntaxPtr;
    struct shared_ptr<WCDB::StringView> m_description;
    _Bool m_hasDescription;
    struct Shadow<WCDB::Syntax::Identifier> m_syntax;
};

struct StatementInsert {
    CDUnknownFunctionPointerType *_vptr$SQL;
    struct Identifier *m_syntaxPtr;
    struct shared_ptr<WCDB::StringView> m_description;
    _Bool m_hasDescription;
    struct Shadow<WCDB::Syntax::Identifier> m_syntax;
};

struct StatementSelect {
    CDUnknownFunctionPointerType *_vptr$SQL;
    struct Identifier *m_syntaxPtr;
    struct shared_ptr<WCDB::StringView> m_description;
    _Bool m_hasDescription;
    struct Shadow<WCDB::Syntax::Identifier> m_syntax;
};

struct StatementUpdate {
    CDUnknownFunctionPointerType *_vptr$SQL;
    struct Identifier *m_syntaxPtr;
    struct shared_ptr<WCDB::StringView> m_description;
    _Bool m_hasDescription;
    struct Shadow<WCDB::Syntax::Identifier> m_syntax;
};

struct Status;

struct StreamAudioDecoder {
    void *_field1;
    void *_field2;
    int _field3;
    char *_field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    _Bool _field9;
};

struct StringView {
    char *m_data;
    unsigned long long m_length;
    void *m_referenceCount;
};

struct StrongShape<tflite::gpu::Layout::BHWC> {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct SupportVectorClassifier;

struct SupportVectorRegressor;

struct SyntaxList<WCDB::OrderingTerm> {
    CDUnknownFunctionPointerType *_field1;
    struct __list_node_base<WCDB::OrderingTerm, void *> {
        void *_field1;
        void *_field2;
    } _field2;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCDB::OrderingTerm, void *>>> {
        unsigned long long _field1;
    } _field3;
};

struct SyntaxList<WCTProperty> {
    CDUnknownFunctionPointerType *_vptr$_SyntaxList;
    struct __list_node_base<WCTProperty, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCTProperty, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct SyntaxList<WCTResultColumn> {
    CDUnknownFunctionPointerType *_vptr$_SyntaxList;
    struct __list_node_base<WCTResultColumn, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCTResultColumn, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct SystemError {
    long long _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                union {
                    struct __long {
                        char *_field1;
                        unsigned long long _field2;
                        unsigned long long _field3;
                    } _field1;
                    struct __short {
                        char _field1[23];
                        struct {
                            unsigned char _field1;
                        } _field2;
                    } _field2;
                    struct __raw _field3;
                } _field1;
            } _field1;
        } _field1;
    } _field2;
};

struct TAVSourceSoftEncoder {
    CDUnknownFunctionPointerType *_field1;
};

struct TBDrawParamType {
    int _field1;
    float _field2[16];
    double _field3[16];
    int _field4;
    int _field5;
    float _field6;
};

struct TC_FaceProfile {
    vector_4c9ad6d1 points;
};

struct TC_FaceShape {
    struct TC_FaceProfile faceProfile;
    struct TC_LeftEyebrow leftEyebrow;
    struct TC_RightEyebrow rightEyebrow;
    struct TC_LeftEye leftEye;
    struct TC_RightEye rightEye;
    struct TC_Nose nose;
    struct TC_Mouth mouth;
    struct TC_Pupil pupil;
};

struct TC_LeftEye {
    vector_4c9ad6d1 points;
};

struct TC_LeftEyebrow {
    vector_4c9ad6d1 points;
};

struct TC_Mouth {
    vector_4c9ad6d1 points;
};

struct TC_Nose {
    vector_4c9ad6d1 points;
};

struct TC_Pupil {
    vector_4c9ad6d1 points;
};

struct TC_RightEye {
    vector_4c9ad6d1 points;
};

struct TC_RightEyebrow {
    vector_4c9ad6d1 points;
};

struct TMBitmapContext {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    float _field6;
    int _field7;
    void *_field8;
    char *_field9[1];
};

struct TMRect {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct TMSize {
    int _field1;
    int _field2;
};

struct TPACodecPropertyRange {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
};

struct TPAVProgramInfo;

struct TPAssetProxyLoaderCallback {
    CDUnknownFunctionPointerType *_field1;
    struct mutex _field2;
    id _field3;
};

struct TPAudioAttributes;

struct TPAudioRouteDescription;

struct TPBaseMediaParams {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field1;
    long long _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    long long _field8;
    float _field9;
    int _field10;
    int _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
};

struct TPConfigParams {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    int _field7;
    float _field8;
    int _field9;
};

struct TPDetailInfo {
    int _field1;
    long long _field2;
    long long _field3;
};

struct TPDrmParams {
    int _field1;
    int _field2;
    int _field3;
    long long _field4;
    long long _field5;
    int _field6;
    int _field7;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field8;
    long long _field9;
    long long _field10;
    long long _field11;
    long long _field12;
    long long _field13;
    long long _field14;
    long long _field15;
    long long _field16;
    long long _field17;
    long long _field18;
    long long _field19;
    long long _field20;
    long long _field21;
    long long _field22;
    long long _field23;
    long long _field24;
    long long _field25;
    long long _field26;
};

struct TPDynamicStatisticParams {
    long long _field1;
    long long _field2;
    int _field3;
    int _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    long long _field8;
    long long _field9;
    long long _field10;
    int _field11;
    int _field12;
    int _field13;
};

struct TPEncodedDataParams {
    int codecID;
    int profile;
    int mediaType;
};

struct TPFrame {
    int _field1;
    char *_field2[8];
    int _field3[8];
    char **_field4;
    int _field5;
    int _field6;
    int _field7;
    long long _field8;
    long long _field9;
    long long _field10;
    void *_field11;
    long long _field12;
    int _field13;
    struct TPFrameSideData **_field14;
    int _field15;
    int _field16;
    int _field17;
    int _field18;
    struct TPRational _field19;
    int _field20;
    int _field21;
    int _field22;
    int _field23;
    int _field24;
    unsigned long long _field25;
    unsigned long long _field26;
    unsigned long long _field27;
    unsigned long long _field28;
    int _field29;
    int _field30;
    int _field31;
    unsigned long long _field32;
    int _field33;
    struct TPFrameReleaseDataCB _field34;
    struct TPFrameReleasePlanarDataCB _field35;
    struct TPFrameInternal *_field36;
    int _field37;
    long long _field38;
};

struct TPFrameInternal;

struct TPFrameMetadata {
    int _field1;
    struct TPHDRVividDynamicMetadata _field2;
    struct TPHDR10StaticMetadata _field3;
};

struct TPFrameReleaseDataCB {
    CDUnknownFunctionPointerType _field1;
    void *_field2;
};

struct TPFrameReleasePlanarDataCB {
    CDUnknownFunctionPointerType _field1;
    void *_field2;
};

struct TPFrameSideData;

struct TPGeneralPlayFlowParams {
    struct TPConfigParams _field1;
    struct TPBaseMediaParams _field2;
    struct TPGeneralTrackingParams _field3;
    struct TPDrmParams _field4;
};

struct TPGeneralTrackingParams {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    long long _field8;
    long long _field9;
    long long _field10;
    long long _field11;
    long long _field12;
    long long _field13;
    long long _field14;
};

struct TPHDR10StaticMetadata {
    unsigned short _field1[3];
    unsigned short _field2[3];
    unsigned short _field3;
    unsigned short _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned short _field7;
    unsigned short _field8;
};

struct TPHDRDeviceInfo {
    float max_display_pq;
    float min_display_pq;
};

struct TPHDRVividDynamicMetadata {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3[2];
    unsigned short _field4[2];
    unsigned short _field5[2];
    unsigned short _field6[2];
    unsigned char _field7[2];
    unsigned char _field8[2];
    unsigned short _field9[2][2];
    unsigned char _field10[2][2];
    unsigned short _field11[2][2];
    unsigned char _field12[2][2];
    unsigned short _field13[2][2];
    unsigned short _field14[2][2];
    unsigned char _field15[2][2];
    unsigned char _field16[2][2];
    unsigned char _field17[2][2];
    unsigned char _field18[2][2];
    unsigned char _field19[2][2];
    unsigned char _field20[2][2];
    unsigned char _field21[2][2];
    unsigned char _field22[2][2];
    unsigned char _field23[3][2][2];
    unsigned char _field24[3][2][2];
    unsigned short _field25[3][2][2];
    unsigned short _field26[3][2][2];
    unsigned short _field27[3][2][2];
    unsigned char _field28[3][2][2];
    unsigned char _field29[2];
    unsigned char _field30[2];
    unsigned char _field31[8][2];
};

struct TPHDRVividMetadataProcessor {
    struct TPHDRVividProcessedDynamicMetadata _field1;
    struct TPHDRVividProcessedStaticMetadata _field2;
};

struct TPHDRVividProcessedDynamicMetadata {
    unsigned char _field1;
    unsigned char _field2;
    float _field3[2];
    float _field4[2];
    float _field5[2];
    float _field6[2];
    int _field7[2];
    int _field8[2];
    float _field9[2][2];
    float _field10[2];
    float _field11[2];
    int _field12[2][2];
    float _field13[2][2];
    float _field14[2][2];
    float _field15[2][2];
    float _field16[2][2];
    float _field17[2][2];
    float _field18[2][2];
    float _field19[2][2];
    float _field20[2][2];
    int _field21[2][2];
    float _field22[2][2];
    int _field23[2][2];
    int _field24[2][2];
    int _field25[3][2][2];
    float _field26[3][2][2];
    float _field27[3][2][2];
    float _field28[3][2][2];
    float _field29[3][2][2];
    float _field30[3][2][2];
    float _field31[3][2][2];
    float _field32[3][2][2];
    float _field33[3][2][2];
    int _field34[2];
    int _field35[2];
    float _field36[8][2];
};

struct TPHDRVividProcessedStaticMetadata {
    float _field1[3];
    float _field2[3];
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
};

struct TPHDRVividToneMappingParams {
    float m_p;
    float m_m;
    float m_n;
    float m_a;
    float m_b;
    float k1;
    float k2;
    float k3;
    float th1[3];
    float th2[3];
    float th3[3];
    float base_offset[3];
    float ma[3][3];
    float mb[3][3];
    float mc[3][3];
    float md[3][3];
    int thmode[3];
    int cubic_nums;
    float color_sat;
    float c0;
    float c1;
    float a;
    float b;
    float satr;
    float rml;
};

struct TPJitterBufferConfigParams {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
};

struct TPMediaTrackInfo;

struct TPOpenGLTextureHelper;

struct TPPlayerConnectionNode {
    CDUnknownFunctionPointerType *_field1;
    struct map<TPPlayerConnectionNode::Action, TPPlayerConnectionNode::ConfigMaps, std::less<TPPlayerConnectionNode::Action>, std::allocator<std::pair<const TPPlayerConnectionNode::Action, TPPlayerConnectionNode::ConfigMaps>>> _field2;
};

struct TPPlayerInitConfig {
    struct map<TPPlayerInitConfig::KeyType, std::deque<TPPlayerInitConfig::ConfigVal<int>>, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, std::deque<TPPlayerInitConfig::ConfigVal<int>>>>> m_queueIntMap;
    struct map<TPPlayerInitConfig::KeyType, std::deque<std::string>, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, std::deque<std::string>>>> m_queueStringMap;
    struct map<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<int>, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<int>>>> m_intMap;
    struct map<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<long long>, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<long long>>>> m_longMap;
    struct map<TPPlayerInitConfig::KeyType, bool, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, bool>>> m_boolMap;
    struct map<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<float>, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<float>>>> m_floatMap;
    struct map<TPPlayerInitConfig::KeyType, std::string, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, std::string>>> m_stringMap;
    struct map<TPPlayerInitConfig::KeyType, std::shared_ptr<void>, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, std::shared_ptr<void>>>> m_objectMap;
};

struct TPPlayerRichMediaAsyncRequesterCallbackWrapper {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
};

struct TPPlayerRichMediaExtraRequestInfo {
    int _field1;
};

struct TPPlayerRichMediaFeature;

struct TPPlayerRichMediaProcessorCallbackWrapper {
    CDUnknownFunctionPointerType *_field1;
    CDUnknownFunctionPointerType *_field2;
    id _field3;
    id _field4;
    id _field5;
};

struct TPPlayerRichMediaTimeRange {
    long long _field1;
    long long _field2;
};

struct TPRational {
    int num;
    int den;
};

struct TPRendererAudioFrameParams {
    int format;
    int sampleRate;
    unsigned long long channelLayout;
    int channels;
    struct TPEncodedDataParams encodedDataParams;
};

struct TPRendererConfigs {
    int renderThreadPriority;
    struct TPRendererAudioFrameParams audioFrameParams;
    _Bool resetAudioRendererWhenFlush;
    long long audioNonBluetoothMaxLatencyUs;
    long long audioBluetoothMaxLatencyUs;
    struct shared_ptr<tp_utils::TPAudioAttributes> audioAttributes;
    _Bool enableAsyncBlockWrite;
    _Bool enableAllocSuggestedBufferSize;
    _Bool enableAdaptAudioQueue;
    _Bool enableAudioQueueNewLatency;
    struct TPRendererVideoFrameParams videoFrameParams;
    void *videoRenderTarget;
    _Bool enableColorManagement;
    _Bool enableViewContentMode;
    _Bool enableRefactorRender;
    _Bool atBottom;
    int enableRendererSharpen;
    int enableRendererLucid;
    int enableRendererClarity;
    _Bool enableRenderOptYuv420;
};

struct TPRendererParamBlock {
    int _field1;
    long long _field2;
    void *_field3;
};

struct TPRendererVideoFrameParams {
    int format;
    int width;
    int height;
    struct TPRational sampleAspectRatio;
    int rotation;
    unsigned long long cropTop;
    unsigned long long cropBottom;
    unsigned long long cropLeft;
    unsigned long long cropRight;
};

struct TPRtcRemoteSdpInfo {
    _Bool _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field2;
};

struct TPSubtitleParserCallbackWrapper {
    CDUnknownFunctionPointerType *_field1;
    CDUnknownFunctionPointerType *_field2;
    id _field3;
    id _field4;
};

struct TPThumbPlayerAudioFrameCallbackWrapper {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
};

struct TPThumbPlayerDemuxerCallbackWrapper {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
};

struct TPThumbPlayerEventRecordCallbackWrapper;

struct TPThumbPlayerMessageCallbackWrapper {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
};

struct TPThumbPlayerPostProcessFrameCallbackWrapper {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
};

struct TPThumbPlayerSubtitleFrameCallbackWrapper {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
};

struct TPThumbPlayerVideoFrameCallbackWrapper {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
};

struct TPVCodecMaxCapability {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct TPVCodecPropertyRange {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
};

struct TPVideoOpenGLRenderBase;

struct TPVideoRender {
    CDUnknownFunctionPointerType *_field1;
    struct TPVideoOpenGLRenderBase *_field2;
    int _field3;
};

struct TPVideoRenderFrame {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    unsigned int _field4[4];
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    struct TPFrameMetadata _field13;
    struct ITPTemporyImageConverter *_field14;
    struct TPOpenGLTextureHelper *_field15;
};

struct TRTCAudioEffectCallback;

struct TRTCNetworkQosParam {
    int _field1;
    int _field2;
};

struct TRTCPipelineClient;

struct TRTCVideoEncParams {
    struct Optional<liteav::trtc::internal::TRTCVideoResolution> _field1;
    struct Optional<liteav::trtc::internal::TRTCVideoResolutionMode> _field2;
    struct Optional<unsigned int> _field3;
    struct Optional<unsigned int> _field4;
    struct Optional<unsigned int> _field5;
    struct Optional<unsigned int> _field6;
    struct Optional<unsigned int> _field7;
    struct Optional<unsigned int> _field8;
    struct Optional<liteav::video::RcMethod> _field9;
    struct Optional<unsigned int> _field10;
    struct Optional<unsigned int> _field11;
    struct Optional<unsigned int> _field12;
    struct Optional<liteav::video::EncoderStrategy> _field13;
    struct Optional<unsigned int> _field14;
    struct Optional<unsigned int> _field15;
};

struct TSKDetectParams_ {
    int _field1;
    int _field2;
    double _field3;
    int _field4;
    int _field5;
    int _field6;
};

struct TWasmBindingModule {
    struct OpaqueJSContext *_field1;
    _Bool _field2;
    struct IWasmContext *_field3;
    struct IWasmAdaptor *_field4;
    struct IWasmGlueAdaptor *_field5;
};

struct TXCVideoRpsFramerateCallback;

struct TXCVolumeLevelS16 {
    CDUnknownFunctionPointerType *_vptr$TXCVolumeLevelS16;
    unsigned int sample_rate_;
    unsigned int channels_;
    unsigned int internal_abs_max_value_for_level_;
    unsigned short abs_max_value_for_level_;
    unsigned long long processed_samples_for_level;
    unsigned long long processed_samples_threshold_for_level_;
    unsigned short last_max_pcm_sample_energy_;
    unsigned short max_pcm_sample_energy_;
    unsigned long long processed_samples_for_energy_;
    unsigned long long processed_samples_threshold_for_energy_;
};

struct TXLiveBaseObserverImpl;

struct TXLivePlayerObserverImpl;

struct TXLivePushObserverImpl;

struct TXLogCallbackWrapper;

struct TXNtpServiceCallbackImpl;

struct TaskCallback;

struct TaskConfig {
    unsigned int _field1;
};

struct TaskIdConvertor {
    struct map<zidl::TaskIdConvertor::ClientIdContext, unsigned long long, std::less<zidl::TaskIdConvertor::ClientIdContext>, std::allocator<std::pair<const zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> client_to_server_map_id;
    struct map<unsigned long long, zidl::TaskIdConvertor::ClientIdContext, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> server_to_client_map_id;
    struct mutex mtx;
    struct atomic<unsigned long long> cur_task_id;
};

struct TaskRunner;

struct TenpayCgiCallback;

struct TensorData;

struct TensorDesc {
    int dataKind;
    struct TensorShape logicShape;
};

struct TensorShape {
    long long mSize;
    long long mData[8];
};

struct TextClassifier;

struct TextEditingDelta {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> _field2;
    struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> _field3;
    int _field4;
    int _field5;
};

struct TextWidgetVerticalLayoutAttrs {
    unsigned long long _field1;
};

struct ThirdPartyCdnConfig {
    unsigned int _field1;
    unsigned int _field2;
    int _field3;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field4;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field5;
};

struct Thread;

struct ThreadHost {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field1;
    struct unique_ptr<fml::Thread, std::default_delete<fml::Thread>> _field2;
    struct unique_ptr<fml::Thread, std::default_delete<fml::Thread>> _field3;
    struct unique_ptr<fml::Thread, std::default_delete<fml::Thread>> _field4;
    struct unique_ptr<fml::Thread, std::default_delete<fml::Thread>> _field5;
    struct unique_ptr<fml::Thread, std::default_delete<fml::Thread>> _field6;
};

struct TimeLapse {
    unsigned long long start;
    unsigned long long end;
};

struct TimeMapCoordinate;

struct TimePoint {
    long long ticks_;
};

struct TimeTicks {
    long long _field1;
};

struct Tracker {
    CDStruct_6e3f967a _field1;
    float _field2;
    _Bool _field3;
    float _field4;
};

struct TrackerManager {
    int mWidth;
    int mHeight;
    long long mTrackerConfig;
    struct unique_ptr<WeEffect::TrackerManager::TrackerManagerImpl, std::default_delete<WeEffect::TrackerManager::TrackerManagerImpl>> mImpl;
};

struct TrackerManagerImpl;

struct TrailCell {
    CDUnknownFunctionPointerType *_field1;
    struct TimeMapCoordinate *_field2;
    int _field3;
    int _field4;
    int _field5;
};

struct TrailData {
    struct TrailCell **_field1;
    unsigned long long _field2;
    int *_field3;
    unsigned long long _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    float _field9;
    _Bool _field10;
    int _field11;
    int _field12;
    int _field13;
    float _field14;
    _Bool _field15;
    int _field16;
    int _field17;
    int _field18;
    float _field19;
    int _field20;
    struct Gradient *_field21;
};

struct TransParams {
    int _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
    float _field23;
    int _field24;
    int _field25;
    int _field26;
    float _field27;
    int _field28;
    int _field29;
    int _field30;
    float _field31;
    float _field32;
    float _field33;
    float _field34;
    float _field35;
    float _field36;
    float _field37;
    float _field38;
    float _field39;
    float _field40;
    float _field41;
    int _field42;
};

struct TranscodingPrams {
    int outWidth;
    int outHeight;
    int outVideoBitrate;
    float outFrameRate;
    int outAudioBitrate;
    int outAudioSampling;
    int audiochannels;
    int cropLeft;
    int cropTop;
    int cropWidth;
    int cropHeight;
    int startTime;
    int endTime;
    int adaptiveBRUp;
    int adaptiveBRDown;
    _Bool useAudioSkipResamplingMode;
    int vcodec2Preset;
    int vbvBufferSize;
    float crf;
    int intraPeriod;
};

struct TreeEnsembleClassifier;

struct TreeEnsembleRegressor;

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double _field1;
    double _field2;
};

struct UploadParams {
    basic_string_5909a4e2 file_path;
    basic_string_5909a4e2 head_form_data;
    basic_string_5909a4e2 end_form_data;
    unsigned long long upload_offset;
    unsigned long long upload_range;
    _Bool vfs_upload_path_;
    int report_id;
};

struct UseCase;

struct V2TXLivePlayerObserverImpl;

struct V2TXLivePusherObserverImpl;

struct VMConfigure {
    _Bool isDebug;
    _Bool isMsgLookUpEnabled;
    _Bool isCacheEnable;
};

struct VOIPCSNetNotifier {
    CDUnknownFunctionPointerType *_field1;
};

struct VOIPChannelAdapter {
    CDUnknownFunctionPointerType *_field1;
};

struct VOIPNetNotifier {
    CDUnknownFunctionPointerType *_field1;
};

struct VQMAPICppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct VQMAPIDispatcher;

struct VQMConfAPICppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct VQMConfAPIDispatcher;

struct VQMObserverCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct VQMObserverDispatcher;

struct VideoEncodeParams {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    int _field8;
    int _field9;
    float _field10;
    float _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    _Bool _field15;
    _Bool _field16;
    _Bool _field17;
    unsigned int _field18;
    unsigned int _field19;
    _Bool _field20;
    _Bool _field21;
    int _field22;
    int _field23;
    int _field24;
    unsigned int _field25;
};

struct VideoFrame;

struct VideoGeneralInfo {
    float _field1;
    _Bool _field2;
    struct DecodingInfo _field3;
    struct DecodingInfo _field4;
    struct OnePassEncInfo _field5;
    struct CRFAdjustMediumInfo _field6;
};

struct VideoInfo;

struct VideoMetadata {
    struct CopyOnWriteBuffer pps;
    struct CopyOnWriteBuffer sps;
    struct CopyOnWriteBuffer vps;
    int codec;
    unsigned int width;
    unsigned int height;
    int rotation;
};

struct VideoSize {
    int _field1;
    int _field2;
};

struct VideoStats;

struct VideoTranscoding {
    struct TranscodingPrams mTransParams;
    struct ReportStaticPrams mStaticPrams;
    struct EncDecPrams mEncDecPrams;
    struct VideoTranscodingImpl *mVideoranscodingImpl;
};

struct VideoTranscodingImpl;

struct ViewportMetrics {
    double device_pixel_ratio;
    double physical_width;
    double physical_height;
    double physical_padding_top;
    double physical_padding_right;
    double physical_padding_bottom;
    double physical_padding_left;
    double physical_view_inset_top;
    double physical_view_inset_right;
    double physical_view_inset_bottom;
    double physical_view_inset_left;
    double physical_system_gesture_inset_top;
    double physical_system_gesture_inset_right;
    double physical_system_gesture_inset_bottom;
    double physical_system_gesture_inset_left;
    double physical_touch_slop;
    vector_0e047154 physical_display_features_bounds;
    vector_cd3186ef physical_display_features_type;
    vector_cd3186ef physical_display_features_state;
    unsigned long long display_id;
};

struct VisionFeaturePrint;

struct VoIPMPIlinkSDKStatAPICppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct VoIPMPIlinkSDKStatAPIDispatcher;

struct VoIPMPSystemAuthAPICppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct VoIPMPSystemAuthAPIDispatcher;

struct VoIPMPSystemAuthNativeAPICppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct VoIPMPSystemAuthNativeAPIDispatcher;

struct VoIPMPSystemAuthNativeAPIDispatcherBridgeObjcImpl {
    CDUnknownFunctionPointerType *_field1;
    struct VoIPMPSystemAuthNativeAPIDispatcherCallback *_field2;
    id _field3;
};

struct VoIPMPSystemAuthNativeAPIDispatcherCallback;

struct VoIPRingBuffer {
    unsigned int _field1;
    unsigned int _field2;
    int _field3;
    int _field4;
    struct _VoIPRingBufferElement *_field5;
    struct _opaque_pthread_mutex_t *_field6;
    int _field7;
};

struct VoidBinaryI32Callback;

struct VoidBoolCallback;

struct VoidBoolI32Callback;

struct VoidBoolOptionCallback;

struct VoidBoolStringCallback;

struct VoidBoolStringI32StringCallback;

struct VoidCallback;

struct VoidF32F32BoolCallback;

struct VoidI64Callback;

struct VoidITransmitKvDataCallback;

struct VoidITransmitKvDataNoticeItemCallback;

struct VoidKRectCallback;

struct VoidListCallback;

struct VoidStringBinaryCallback;

struct VoidStringBoolCallback;

struct VoidStringCallback;

struct VoidStringStringBinaryCallback;

struct VoidStringStringCallback;

struct VoidStringStringStringCallback;

struct VoipCS3rdReport_t {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned long long _field16;
    unsigned long long _field17;
};

struct VoipCSChannelAdapter {
    CDUnknownFunctionPointerType *_field1;
};

struct VoipCSChannelReport_t {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    unsigned int _field40;
};

struct VoipCSClientReport_t {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char _field4[256];
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    int _field19;
    int _field20;
    int _field21;
    int _field22;
    unsigned long long _field23;
    int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    int _field29;
    int _field30;
    int _field31;
    char _field32[256];
    char _field33[256];
    char _field34[256];
    char _field35[256];
};

struct VoipCSEngineReport_t {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    unsigned int _field40;
    unsigned int _field41;
    unsigned int _field42;
    unsigned int _field43;
    unsigned int _field44;
    unsigned int _field45;
    unsigned int _field46;
    unsigned int _field47;
    unsigned int _field48;
    unsigned int _field49;
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    int _field54;
    unsigned int _field55;
    unsigned int _field56;
    unsigned int _field57;
    unsigned int _field58;
    unsigned int _field59;
    unsigned int _field60;
    unsigned int _field61;
    unsigned int _field62;
    unsigned int _field63;
    unsigned int _field64;
    unsigned int _field65;
    unsigned int _field66;
    unsigned int _field67;
    unsigned int _field68;
    unsigned int _field69;
    unsigned int _field70;
    unsigned int _field71;
    unsigned int _field72;
    unsigned int _field73;
    unsigned int _field74;
    unsigned int _field75;
    unsigned int _field76;
    unsigned int _field77;
    unsigned int _field78;
    unsigned int _field79;
    unsigned int _field80;
    unsigned int _field81;
    unsigned int _field82;
    unsigned int _field83;
    unsigned int _field84;
    unsigned int _field85;
    unsigned int _field86;
    unsigned int _field87;
    unsigned int _field88;
    unsigned int _field89;
    unsigned int _field90;
    unsigned int _field91;
    unsigned int _field92;
    unsigned int _field93;
    unsigned int _field94;
    unsigned int _field95;
    unsigned int _field96;
    unsigned int _field97;
    unsigned int _field98;
    unsigned int _field99;
    unsigned int _field100;
    unsigned int _field101;
    unsigned int _field102;
    unsigned int _field103;
    unsigned int _field104;
    unsigned int _field105;
    unsigned int _field106;
    unsigned int _field107;
    unsigned int _field108;
    unsigned int _field109;
    unsigned int _field110;
    unsigned int _field111;
    unsigned int _field112;
    unsigned int _field113;
    unsigned int _field114;
    unsigned int _field115;
    unsigned int _field116;
    unsigned int _field117;
    unsigned int _field118;
    unsigned int _field119;
    unsigned int _field120;
    unsigned int _field121;
    unsigned int _field122;
    unsigned int _field123;
    unsigned int _field124;
    unsigned int _field125;
    unsigned int _field126;
    unsigned int _field127;
    unsigned int _field128;
    unsigned int _field129;
    unsigned int _field130;
    unsigned int _field131;
    unsigned int _field132;
    unsigned int _field133;
    unsigned int _field134;
    unsigned int _field135;
    unsigned int _field136;
    unsigned int _field137;
    unsigned int _field138;
    int _field139;
    int _field140;
    int _field141;
    int _field142;
    int _field143;
    int _field144;
    int _field145;
    int _field146;
    unsigned int _field147;
    unsigned int _field148;
    unsigned int _field149;
    unsigned int _field150;
    unsigned int _field151;
    unsigned int _field152;
    unsigned int _field153;
    unsigned int _field154;
    unsigned int _field155;
    unsigned int _field156;
    unsigned int _field157;
    unsigned int _field158;
};

struct VoipmpCoreApiServiceCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct VoipmpCoreApiServiceDispatcher;

struct VoipmpCoreImplServiceCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct VoipmpCoreImplServiceDispatcher;

struct VoipmpCoreImplServiceDispatcherBridgeObjcImpl {
    CDUnknownFunctionPointerType *_field1;
    struct VoipmpCoreImplServiceDispatcherCallback *_field2;
    id _field3;
};

struct VoipmpCoreImplServiceDispatcherCallback;

struct WAAppInfo {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field2;
    _Bool _field3;
};

struct WAGameThreadWaitReady;

struct WAPkgCronetDownloadCallback;

struct WARecorderData {
    id _field1;
    id _field2;
    struct AudioStreamBasicDescription _field3;
    struct OpaqueAudioQueue *_field4;
    struct AudioQueueBuffer *_field5[3];
    id _field6;
};

struct WCDBLockGuard {
    shared_ptr_45de587b m_mutex;
    _Bool m_exclusive;
};

struct WCDBSharedLock;

struct WCFDMonitorThreadInfo;

struct WCFImageMeta {
    struct CGSize _field1;
    long long _field2;
};

struct WCFinderDynamicIcon {
    UIImage *image;
    WCFinderDynamicIconFetcherResponse *op;
};

struct WCFinderFeedFlowViewCellMenuComponment {
    CDUnknownBlockType menuGenerator;
};

struct WCFinderFeedFlowViewHeaderComponment {
    Class headerClass;
    CDUnknownBlockType measurer;
    CDUnknownBlockType setupBlock;
};

struct WCFinderInteractiveCounts {
    long long fav;
    long long like;
};

struct WCFinderKeywordAction {
    long long _field1;
    id _field2;
};

struct WCFinderNavLiveStreamGroup {
    id _field1;
    id _field2;
};

struct WCFinderPlayerControlProgressState {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    _Bool _field4;
};

struct WCFinderProfileCard;

struct WCFinderProfilePlaylistItem {
    Class _field1;
    CDUnknownBlockType _field2;
};

struct WCFinderReuseConfig {
    id _field1;
};

struct WCFinderShareDataState {
    long long flag;
    WCFinderShareSpanState *span;
};

struct WCFinderTaskPQCMP;

struct WCPayReportLog {
    unsigned long long _field1;
    unsigned long long _field2;
    char *_field3;
};

struct WCPinLayout {
    id _field1;
    struct WCValue _field2;
    struct WCValue _field3;
    struct WCValue _field4;
    struct WCValue _field5;
    struct WCValue _field6;
    struct WCValue _field7;
    struct WCValue _field8;
    struct WCValue _field9;
    struct WCValue _field10;
    struct WCValue _field11;
    struct WCValue _field12;
    struct WCValue _field13;
    int _field14;
    struct WCValue _field15;
    struct WCValue _field16;
    struct WCValue _field17;
    struct WCValue _field18;
    _Bool _field19;
    int _field20;
    int _field21;
    _Bool _field22;
};

struct WCShowArea {
    double x_p;
    double y_p;
    double w_p;
    double h_p;
};

struct WCSize {
    struct WCValue _field1;
    struct WCValue _field2;
};

struct WCTOptionalBool {
    CDUnknownFunctionPointerType *_field1;
    struct Optional<bool> {
        _Bool _field1;
        CDUnion_2739e4df _field2;
    } _field2;
    _Bool _field3;
};

struct WCTOptionalSize {
    CDUnknownFunctionPointerType *_field1;
    struct Optional<unsigned long> _field2;
    unsigned long long _field3;
};

struct WCURLSessionTaskCallBack;

struct WCValue {
    int _field1;
    double _field2;
};

struct WXAVRational {
    int num;
    int den;
};

struct WXAudioScriptState {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    struct OpaqueJSContext *_field3;
    long long _field4;
    struct BindingsLifeCycleMgr *_field5;
    struct WXMediaMgr *_field6;
};

struct WXColorProperties {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct WXMediaMgr;

struct WXTalkieEngineAdapter {
    CDUnknownFunctionPointerType *_field1;
};

struct WasmAdaptorBridge {
    CDUnknownFunctionPointerType *_field1;
    void *_field2;
};

struct WasmAdaptorImpl {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
    id _field4;
    _Bool _field5;
    _Bool _field6;
    int _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    id _field13;
    id _field14;
    id _field15;
    id _field16;
    id _field17;
};

struct WaveFile {
    struct unique_ptr<__sFILE, std::function<void (__sFILE *)>> m_file;
    _Bool m_readOnly;
    _Bool m_isReady;
    int m_fileFormat;
    unsigned long long m_sampleRate;
    unsigned long long m_channels;
    unsigned long long m_totalFrames;
    unsigned long long m_sampleSize;
    unsigned long long m_frameStartPos;
    unsigned long long m_frameRead;
    unsigned int m_channelMask;
    double m_duration;
};

struct WeImage<unsigned char> {
    struct shared_ptr<wevision::WeImage<unsigned char>::Imp> _field1;
};

struct WeNoteAffDelegateCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct WeNoteAffDelegateDispatcher;

struct WeNoteCPPInstanceCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct WeNoteCPPInstanceDispatcher;

struct WeNoteCPPInstanceDispatcherBridgeObjcImpl {
    CDUnknownFunctionPointerType *_field1;
    struct WeNoteCPPInstanceDispatcherCallback *_field2;
    id _field3;
};

struct WeNoteCPPInstanceDispatcherCallback;

struct WeNoteFlutterInstanceCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct WeNoteFlutterInstanceDispatcher;

struct WeNoteFlutterInstanceDispatcherBridgeObjcImpl {
    CDUnknownFunctionPointerType *_field1;
    struct WeNoteFlutterInstanceDispatcherCallback *_field2;
    id _field3;
};

struct WeNoteFlutterInstanceDispatcherCallback;

struct WeVisDataReport22049 {
    _Bool mIsInited;
    struct vector<WeVisDataReport22049Field, std::allocator<WeVisDataReport22049Field>> mFieldVect;
    struct unordered_map<std::string, unsigned long, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> mfind;
};

struct WeVisDataReport22049Field;

struct WeakContainer;

struct WeakNSObject<FlutterEngine> {
    RefPtr_fcf19635 container_;
    struct DebugThreadChecker checker_;
};

struct WeakNSObject<FlutterKeyboardManager> {
    RefPtr_fcf19635 _field1;
    struct DebugThreadChecker _field2;
};

struct WeakNSObject<FlutterViewController> {
    RefPtr_fcf19635 container_;
    struct DebugThreadChecker checker_;
};

struct WeakPtr<XMJPublisherSessionMetrics> {
    struct XMJPublisherSessionMetrics *_ptr;
    struct WeakRefType *m_refs;
};

struct WeakPtr<XMJResourcePreloader> {
    struct XMJResourcePreloader *_ptr;
    struct WeakRefType *m_refs;
};

struct WeakPtr<flutter::AccessibilityBridgeIos> {
    struct AccessibilityBridgeIos *ptr_;
    struct RefPtr<fml::internal::WeakPtrFlag> flag_;
    struct DebugThreadChecker checker_;
};

struct WeakPtr<flutter::FlutterPlatformViewsController> {
    struct FlutterPlatformViewsController *ptr_;
    struct RefPtr<fml::internal::WeakPtrFlag> flag_;
    struct DebugThreadChecker checker_;
};

struct WeakPtr<flutter::PlatformView> {
    struct PlatformView *_field1;
    struct RefPtr<fml::internal::WeakPtrFlag> _field2;
    struct DebugThreadChecker _field3;
};

struct WeakPtrFlag;

struct WeakRefType;

struct WebNetCallBack;

struct WebPData {
    char *_field1;
    unsigned long long _field2;
};

struct WebPIterator {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    struct WebPData _field10;
    int _field11;
    int _field12;
    unsigned int _field13[2];
    void *_field14;
};

struct WebPageNeedProfile {
    unsigned long long redirect_start;
    unsigned long long redirect_end;
    unsigned long long fetch_start;
    unsigned long long domain_lookup_start;
    unsigned long long domain_lookup_end;
    unsigned long long connect_start;
    unsigned long long connect_end;
    unsigned long long secure_connection_start;
    unsigned long long secure_connection_end;
    unsigned long long request_start;
    unsigned long long request_end;
    unsigned long long response_start;
    unsigned long long response_end;
    basic_string_5909a4e2 protocol;
    int rtt;
    int status_code;
    int network_estimate_type;
    int http_rtt_estimate;
    int transport_rtt_estimate;
    int downstream_throughput_kbps_estimate;
    int throughput_kbps;
    basic_string_5909a4e2 peer_ip;
    int peer_port;
    _Bool socket_reused;
    long long sent_bytes_count;
    long long received_bytes_count;
};

struct WenoteFlutterManagerCppCover {
    CDUnknownFunctionPointerType *_vptr$IdentityDispatcher;
    basic_string_5909a4e2 zidl_svr_identity;
    basic_string_5909a4e2 zidl_identity;
    basic_string_5909a4e2 zidl_create_name;
};

struct WenoteFlutterManagerDispatcher;

struct WindowDef {
    CDUnknownFunctionPointerType *_vptr$Cloneable;
    struct list<WCDB::Syntax::Expression, std::allocator<WCDB::Syntax::Expression>> expressions;
    struct list<WCDB::Syntax::OrderingTerm, std::allocator<WCDB::Syntax::OrderingTerm>> orderingTerms;
    struct Optional<WCDB::Syntax::FrameSpec> frameSpec;
};

struct WordEmbedding;

struct WordTagger;

struct WxAdaptiveBRResParams {
    struct VideoGeneralInfo _field1;
    int _field2;
    int _field3;
    int _field4;
    struct ABAControlParams _field5;
    struct PlatformParams _field6;
    struct TransParams _field7;
};

struct WxAudioFileCallback {
    CDUnknownFunctionPointerType *_field1;
    void *_field2;
};

struct WxConfSDKCallback {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
};

struct WxCronetGlobalCallback;

struct WxDownloadFileProfile {
    basic_string_5909a4e2 temp_file_path;
    basic_string_5909a4e2 file_path;
};

struct WxDownloadFileRequestParams {
    void *callback;
};

struct WxGL;

struct WxNewConfSDKCallback {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
};

struct WxVideoConfigPara {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
};

struct WxVideoTransParaABA {
    int _field1;
    int _field2;
    float _field3;
    int _field4;
    float _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    int _field14;
    float _field15;
    float _field16;
    _Bool _field17;
    int _field18;
    int _field19;
    int _field20;
    int _field21;
    int _field22;
    int _field23;
    int _field24;
    int _field25;
    _Bool _field26;
    float _field27;
    float _field28;
    int _field29;
    int _field30;
    struct WXColorProperties _field31;
    _Bool _field32;
    _Bool _field33;
};

struct X3DEffect;

struct X3DGlobalContext {
    struct unique_ptr<WeEffect::X3DGlobalContext::Impl, std::default_delete<WeEffect::X3DGlobalContext::Impl>> mImpl;
};

struct XAKAsset;

struct XCSMediaFileInputSettings;

struct XChatCls {
    struct unique_ptr<wevision::XChatCls::Impl, std::default_delete<wevision::XChatCls::Impl>> mspImpl;
};

struct XDSInputManager;

struct XDenoising;

struct XEffect_GLContext {
    unsigned int program;
    unsigned int vShader;
    unsigned int fShader;
};

struct XFaceCluster {
    struct unique_ptr<wevision::XFaceCluster::Impl, std::default_delete<wevision::XFaceCluster::Impl>> mspImpl;
};

struct XID {
    struct XUUID _backingUUID;
    basic_string_5909a4e2 _string;
};

struct XIKImage;

struct XIKImageQualityCalculator {
    _Bool _isBlurDetectEnabled;
    unsigned char _darknessLevel;
    struct XSmartBuffer _grayImageBuffer;
};

struct XImageFeat;

struct XIntegerID<int, -1> {
    int _value;
};

struct XLiveCompose;

struct XLoggerInfo_t {
    int _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    int _field5;
    struct timeval _field6;
    long long _field7;
    long long _field8;
    long long _field9;
    int _field10;
};

struct XMFASRProcessor;

struct XMFAspectRatio {
    int _aspectRatioType;
    struct XRationalI32 _rational;
};

struct XMFAudioAutoVolumeCalculator;

struct XMFAudioTrack;

struct XMFAudioWaveformGenF32;

struct XMFClip;

struct XMFCombinedCurveTimingFunc;

struct XMFDecibelHeightCalcF32;

struct XMFFrameCreatorApple;

struct XMFFrameRate {
    struct XTMTime _frameDuration;
    float _numericValue;
    int _frameRateType;
};

struct XMFImageFileClip;

struct XMFImageTrack;

struct XMFMediaFile;

struct XMFVideoClip;

struct XMFVideoClipThumbGen;

struct XMFVideoClipThumbGenKeyframeImpl;

struct XMFVideoFrame;

struct XMFVideoFrameCocoaLoader;

struct XMFVideoTrack;

struct XMJAssetInfo;

struct XMJAsyncTaskInfo {
    struct shared_ptr<XMJError> Error;
    int ExecutionID;
    basic_string_5909a4e2 TaskTag;
};

struct XMJBridgeCDNService;

struct XMJCamResourceManager;

struct XMJCamSession;

struct XMJCamTemplateInfo {
    _Bool _field1;
    _Bool _field2;
    struct XTMTime _field3;
    struct XTMTime _field4;
    unsigned int _field5;
    _Bool _field6;
    struct vector<std::shared_ptr<XMJMusicInfo>, std::allocator<std::shared_ptr<XMJMusicInfo>>> _field7;
};

struct XMJCamoSession;

struct XMJCaptureSession;

struct XMJCaptureSessionOptions {
    _Bool isUsingFrontCamera;
    int dimensionLevel;
};

struct XMJClipSegment;

struct XMJError;

struct XMJExportManager;

struct XMJFlicks {
    long long _field1;
};

struct XMJILinkAppClientParams {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field1;
    struct XMJILinkLoginParams _field2;
    struct function<XMJILinkLoginParams ()> _field3;
};

struct XMJILinkContextParams {
    struct XOptional<XMJILinkContextParamsSelfManaged> _field1;
    struct XOptional<XMJILinkContextParamsExternalManaged> _field2;
};

struct XMJILinkContextParamsExternalManaged {
    _Bool _field1;
};

struct XMJILinkContextParamsSelfManaged {
    unsigned int _field1;
    _Bool _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field3;
};

struct XMJILinkLoginParams {
    int _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field3;
};

struct XMJILinkParams {
    struct XMJILinkContextParams _field1;
    struct XMJILinkAppClientParams _field2;
};

struct XMJLowerThirdImageGenerator;

struct XMJLyricInfo;

struct XMJMaasCore;

struct XMJMaterialCategory;

struct XMJMaterialInfo;

struct XMJMaterialManager;

struct XMJMovieComposingSessionDelegate;

struct XMJMovieExportSettings {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field9;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field10;
    _Bool _field11;
    map_c53b27e0 _field12;
    _Bool _field13;
    struct XMSCoverImageDetectOptions _field14;
    int _field15;
};

struct XMJMoviePlayer;

struct XMJMovieSessionV3;

struct XMJMusicInfo;

struct XMJPublisherSessionMetrics;

struct XMJRecordingSettings {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    struct XMJTime _field8;
    map_c53b27e0 _field9;
    _Bool _field10;
    int _field11;
    _Bool _field12;
    int _field13;
    _Bool _field14;
    int _field15;
};

struct XMJRenderView;

struct XMJResourcePreloader;

struct XMJSegment;

struct XMJServiceManager;

struct XMJSpeechManager;

struct XMJStickerSegment;

struct XMJTaskTrace;

struct XMJTextSegment;

struct XMJTime {
    struct XMJFlicks _field1;
    int _field2;
};

struct XMJVideoAnalyzer;

struct XMMGPUSpatiotemporalDenosing;

struct XMSCaptionSegment;

struct XMSClipSegment;

struct XMSComposingSession;

struct XMSContentDescSegment;

struct XMSCoverImageDetectOptions {
    _Bool _field1;
    int _field2;
    struct XTMTime _field3;
    float _field4;
    float _field5;
};

struct XMSElementSegment;

struct XMSEmoticonSegment;

struct XMSExportSettings;

struct XMSFancyTextSegment;

struct XMSHandleBoxSettings {
    struct unique_ptr<XMSHandleBoxSettings::XMSHandleBoxSettingsOpaque, std::default_delete<XMSHandleBoxSettings::XMSHandleBoxSettingsOpaque>> _opaque;
};

struct XMSHandleBoxSettingsOpaque;

struct XMSMovieTitleSegment;

struct XMSMusicSegment;

struct XMSNarrationSegment;

struct XMSPlaybackSession;

struct XMSPlaybackWindowCon;

struct XMSProject;

struct XMSSegment;

struct XMSStoryline;

struct XMSTransitionDesc;

struct XMSTransitionSegment;

struct XMSWhenWhereSegment;

struct XMutexPOSIX {
    struct _opaque_pthread_mutex_t _mutex;
};

struct XOneshotDet;

struct XOptional<XMJILinkContextParamsExternalManaged> {
    struct optional<XMJILinkContextParamsExternalManaged> _field1;
};

struct XOptional<XMJILinkContextParamsSelfManaged> {
    struct optional<XMJILinkContextParamsSelfManaged> _field1;
};

struct XPath {
    struct unique_ptr<XPathOpaque, std::default_delete<XPathOpaque>> _opaque;
};

struct XPathOpaque;

struct XRationalI32 {
    struct __tuple_impl<std::__tuple_indices<0, 1>, int, int> {
        int __value_;
        int __value_;
    } __base_;
};

struct XRefCountedBuffer;

struct XRgba2UVFilter;

struct XRgba2YFilter;

struct XSigConnHelper {
    struct list<vboost::signals2::connection, std::allocator<vboost::signals2::connection>> _connections;
};

struct XSimpleFunction {
    struct unique_ptr<XSimpleFunction::Concept, std::default_delete<XSimpleFunction::Concept>> _backingFunc;
};

struct XSmartBuffer {
    struct XRefCountedBuffer *_refCountedBuffer;
};

struct XSummary {
    struct Impl *mpImpl;
};

struct XTMTime {
    long long _periodCount;
    unsigned int _type;
};

struct XTMTimeRange {
    struct XTMTime _startValue;
    struct XTMTime _startToEndValueDifference;
};

struct XUUID {
    struct uuid _backingUUID;
};

struct XVCExportSession;

struct XVCGIFToVideoConverter;

struct XVIOnDemandPreprocManager;

struct XVIPreprocManager;

struct XVIPreprocTask;

struct XmlReaderAttr_t {
    char *_field1;
    char *_field2;
    struct XmlReaderAttr_t *_field3;
};

struct XmlReaderNode_t {
    int _field1;
    char *_field2;
    struct XmlReaderNode_t *_field3;
    struct XmlReaderNode_t *_field4;
    struct XmlReaderNode_t *_field5;
    struct XmlReaderNode_t **_field6;
    struct XmlReaderAttr_t *_field7;
    struct XmlReaderAttr_t **_field8;
    int _field9;
};

struct YGValue {
    float _field1;
    int _field2;
};

struct YTCAPTCHA {
    int fixedInterval;
    int unit;
    int rand_shift;
    int rand_inv;
    vector_cd3186ef intervals;
    char *SeqID;
};

struct YTDataPack {
    struct vector<YTRawImgData, std::allocator<YTRawImgData>> VideoData;
    long long BeginTime;
    long long ChangePointTime;
    vector_1ee95920 ChangePointTimeList;
    float OffsetSys;
    int config_begin;
    int frameNum;
    int LandMarkNum;
    int width;
    int height;
    char *log;
    char *SeqID;
    char *version;
    struct vector<RawYuvData, std::allocator<RawYuvData>> yuvDatas;
};

struct YTDeviceInfo {
    float deviceISO;
    float minISO;
    float maxISO;
};

struct YTFaceAlignment {
    struct YtFaceAlignmentSdk *_field1;
    struct PtsPostProc *_field2;
    struct YTFaceRefiner *_field3;
    struct YTFaceWrapper *_field4;
};

struct YTFaceDetection {
    struct YtFaceDetection *_field1;
};

struct YTFaceRefiner;

struct YTFaceReflect {
    CDUnknownFunctionPointerType encodeJpeg;
    CDUnknownFunctionPointerType stateChangeCB;
    CDUnknownFunctionPointerType screenCB;
    CDUnknownFunctionPointerType cameraCB;
    CDUnknownFunctionPointerType fetchCB;
    struct thread reflectThread;
    struct SS *privateInst;
    struct SSData *mSSData;
    _Bool cancelTask;
    struct Mat BestImg;
    void *mCaller;
    int mTriggerTimes;
    float initLight;
    struct YTDeviceInfo deviceInfo;
};

struct YTFaceWrapper;

struct YTFullPack {
    struct YTDataPack AGin;
    struct YTCAPTCHA CP;
    struct vector<unsigned char, std::allocator<unsigned char>> SingleImg_buffer;
};

struct YTPOSE {
    float pitch;
    float yaw;
    float roll;
};

struct YTPoseEstimate {
    struct YtPoseEstimateSdk *_field1;
};

struct YTRawImgData;

struct YtFaceAlignmentSdk;

struct YtFaceDetParam {
    int min_face_size;
    int max_face_size;
    float scale_factor;
    float net1_threshold;
    float net2_threshold;
    float final_threshold;
    int net1_size;
    float nms_threshold;
    _Bool bigger_face_mode;
    _Bool non_square_rect;
};

struct YtFaceDetection;

struct YtPoseEstimateSdk;

struct ZClientInvoker;

struct ZServerInvoker;

struct _AudioDeviceInfo {
    int _field1;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field2;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field3;
    int _field4;
};

struct _DelegateFlag {
    unsigned int scrollViewDidScroll:1;
    unsigned int endScrollingAnimation:1;
    unsigned int scrollWillBeginDragging:1;
    unsigned int scrollWillEndDragging:1;
    unsigned int scrollDidEndDragging:1;
    unsigned int scrollViewDidEndDecelerating:1;
    unsigned int scrollWillBeginDecelerating:1;
};

struct _IplImage {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    char _field6[4];
    char _field7[4];
    int _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    struct _IplROI *_field13;
    struct _IplImage *_field14;
    void *_field15;
    struct _IplTileInfo *_field16;
    int _field17;
    char *_field18;
    int _field19;
    int _field20[4];
    int _field21[4];
    char *_field22;
};

struct _IplROI;

struct _IplTileInfo;

struct _LzRange {
    unsigned long long location;
    unsigned long long length;
};

struct _MapRouteInfo {
    int _field1;
    union MapVector2d *_field2;
    int _field3;
    struct _MapRouteSection *_field4;
    int _field5;
    float _field6;
    char _field7[512];
    _Bool _field8;
    _Bool _field9;
    int _field10;
    int _field11;
    _Bool _field12;
};

struct _MapRouteSection;

struct _MarkerGroupIconAnchor {
    union MapVector2f _field1;
    char _field2[512];
    struct MapEdgeInsets _field3;
};

struct _MmBp__BaseRequest;

struct _MmBp__InitRequest {
    struct _ProtobufCMessage _field1;
    struct _MmBp__BaseRequest *_field2;
    int _field3;
    struct _ProtobufCBinaryData _field4;
    int _field5;
    struct _ProtobufCBinaryData _field6;
};

struct _NSParserPosition {
    _Bool newLine;
    _Bool endOfString;
    double x;
    double y;
    double width;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _POIInfo {
    struct MapLocation _field1;
    unsigned short _field2[32];
};

struct _POPAnimationState {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    int _field3;
    id _field4;
    unsigned long long _field5;
    double _field6;
    double _field7;
    double _field8;
    id _field9;
    CDUnknownBlockType _field10;
    CDUnknownBlockType _field11;
    CDUnknownBlockType _field12;
    CDUnknownBlockType _field13;
    id _field14;
    double _field15;
    long long _field16;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct _ProtobufCBinaryData {
    unsigned long long _field1;
    char *_field2;
};

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct _RGBAColorLineExtraParam {
    unsigned int _field1[32];
    unsigned int _field2[32];
    float _field3;
    int _field4;
};

struct _RGBADashedLineExtraParam {
    unsigned int _field1;
    unsigned int _field2;
    int _field3;
    int *_field4;
    int _field5;
};

struct _SpeedTestInfo {
    int roomId;
    unsigned long long roomKey;
    unsigned int callType;
    unsigned int isConnecting;
    unsigned int isConnected;
    unsigned int c2Clossrate;
    unsigned int c2CrttCnt;
    NSMutableArray *c2Crtt;
    unsigned int c2SdownLossRate;
    unsigned int c2SrttCnt;
    NSMutableArray *c2Srtt;
    unsigned int sendPkts;
    unsigned int rcvPkts;
};

struct _TSKLogPosition {
    char *_field1;
    char *_field2;
    int _field3;
};

struct _TrafficStyle {
    unsigned int _field1;
    unsigned int _field2;
    int _field3;
    int _field4;
};

struct _VoIPRingBufferElement;

struct __CFString;

struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>>, void *>>> {
    struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
};

struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    _Atomic _Bool __a_value;
};

struct __raw {
    unsigned long long __words[3];
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __shared_weak_count;

struct __siginfo {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    unsigned int _field5;
    int _field6;
    void *_field7;
    union sigval _field8;
    long long _field9;
    unsigned long long _field10[7];
};

struct __tree_end_node<std::__tree_node_base<void *>*> {
    void *__left_;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _opaque_pthread_rwlock_t {
    long long __sig;
    char __opaque[192];
};

struct _opaque_pthread_t {
    long long _field1;
    struct __darwin_pthread_handler_rec *_field2;
    char _field3[8176];
};

struct _sg_state_t {
    _Bool _field1;
    unsigned int _field2;
    struct sg_context _field3;
    struct sg_pass _field4;
    struct sg_pipeline _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    struct {
        CDStruct_dbd3b7f8 _field1;
        CDStruct_dbd3b7f8 _field2;
        CDStruct_dbd3b7f8 _field3;
        CDStruct_dbd3b7f8 _field4;
        CDStruct_dbd3b7f8 _field5;
        CDStruct_dbd3b7f8 _field6;
        CDStruct_183601bc *_field7;
        CDStruct_183601bc *_field8;
        CDStruct_183601bc *_field9;
        CDStruct_183601bc *_field10;
        CDStruct_183601bc *_field11;
        CDStruct_183601bc *_field12;
    } _field9;
    struct {
        _Bool _field1;
        _Bool _field2;
        _Bool _field3;
        int _field4;
        int _field5;
        CDStruct_183601bc *_field6;
        CDStruct_183601bc *_field7;
        struct sg_pass _field8;
        struct {
            struct sg_depth_stencil_state _field1;
            struct sg_blend_state _field2;
            struct sg_rasterizer_state _field3;
            _Bool _field4;
            struct {
                struct {
                    char _field1;
                    char _field2;
                    unsigned char _field3;
                    unsigned char _field4;
                    unsigned char _field5;
                    int _field6;
                    unsigned int _field7;
                } _field1;
                unsigned int _field2;
            } _field5[16];
            unsigned int _field6;
            unsigned int _field7;
            int _field8;
            unsigned int _field9;
            unsigned int _field10;
            CDStruct_183601bc *_field11;
            struct sg_pipeline _field12;
        } _field9;
        _Bool _field10[18];
        _Bool _field11;
        int _field12;
    } _field10;
    _Bool _field11;
    _Bool _field12;
    void *_field13;
};

struct _xmlAttr {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlAttr *_field7;
    struct _xmlAttr *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    int _field11;
    void *_field12;
};

struct _xmlDict;

struct _xmlDoc {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    int _field10;
    int _field11;
    struct _xmlDtd *_field12;
    struct _xmlDtd *_field13;
    struct _xmlNs *_field14;
    char *_field15;
    char *_field16;
    void *_field17;
    void *_field18;
    char *_field19;
    int _field20;
    struct _xmlDict *_field21;
    void *_field22;
    int _field23;
    int _field24;
};

struct _xmlDtd;

struct _xmlHashTable;

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs {
    struct _xmlNs *_field1;
    int _field2;
    char *_field3;
    char *_field4;
    void *_field5;
    struct _xmlDoc *_field6;
};

struct _xmlParserCtxt {
    struct _xmlSAXHandler *_field1;
    void *_field2;
    struct _xmlDoc *_field3;
    int _field4;
    int _field5;
    char *_field6;
    char *_field7;
    int _field8;
    int _field9;
    struct _xmlParserInput *_field10;
    int _field11;
    int _field12;
    struct _xmlParserInput **_field13;
    struct _xmlNode *_field14;
    int _field15;
    int _field16;
    struct _xmlNode **_field17;
    int _field18;
    struct _xmlParserNodeInfoSeq {
        unsigned long long _field1;
        unsigned long long _field2;
        struct _xmlParserNodeInfo *_field3;
    } _field19;
    int _field20;
    int _field21;
    int _field22;
    int _field23;
    int _field24;
    int _field25;
    struct _xmlValidCtxt {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        struct _xmlNode *_field4;
        int _field5;
        int _field6;
        struct _xmlNode **_field7;
        unsigned int _field8;
        struct _xmlDoc *_field9;
        int _field10;
        struct _xmlValidState *_field11;
        int _field12;
        int _field13;
        struct _xmlValidState *_field14;
        struct _xmlAutomata *_field15;
        struct _xmlAutomataState *_field16;
    } _field26;
    int _field27;
    int _field28;
    char *_field29;
    char *_field30;
    int _field31;
    int _field32;
    char **_field33;
    long long _field34;
    long long _field35;
    int _field36;
    int _field37;
    int _field38;
    char *_field39;
    char *_field40;
    char *_field41;
    int *_field42;
    int _field43;
    int _field44;
    int *_field45;
    int _field46;
    struct _xmlParserInput *_field47;
    int _field48;
    int _field49;
    int _field50;
    int _field51;
    void *_field52;
    int _field53;
    int _field54;
    void *_field55;
    int _field56;
    int _field57;
    struct _xmlDict *_field58;
    char **_field59;
    int _field60;
    int _field61;
    char *_field62;
    char *_field63;
    char *_field64;
    int _field65;
    int _field66;
    int _field67;
    char **_field68;
    int *_field69;
    struct _xmlStartTag *_field70;
    struct _xmlHashTable *_field71;
    struct _xmlHashTable *_field72;
    int _field73;
    int _field74;
    int _field75;
    int _field76;
    struct _xmlNode *_field77;
    int _field78;
    struct _xmlAttr *_field79;
    struct _xmlError {
        int _field1;
        int _field2;
        char *_field3;
        int _field4;
        char *_field5;
        int _field6;
        char *_field7;
        char *_field8;
        char *_field9;
        int _field10;
        int _field11;
        void *_field12;
        void *_field13;
    } _field80;
    int _field81;
    unsigned long long _field82;
    unsigned long long _field83;
    struct _xmlParserNodeInfo *_field84;
    int _field85;
    int _field86;
    struct _xmlParserNodeInfo *_field87;
    int _field88;
    unsigned long long _field89;
};

struct _xmlParserInput;

struct _xmlParserNodeInfo;

struct _xmlSAXHandler {
    CDUnknownFunctionPointerType internalSubset;
    CDUnknownFunctionPointerType isStandalone;
    CDUnknownFunctionPointerType hasInternalSubset;
    CDUnknownFunctionPointerType hasExternalSubset;
    CDUnknownFunctionPointerType resolveEntity;
    CDUnknownFunctionPointerType getEntity;
    CDUnknownFunctionPointerType entityDecl;
    CDUnknownFunctionPointerType notationDecl;
    CDUnknownFunctionPointerType attributeDecl;
    CDUnknownFunctionPointerType elementDecl;
    CDUnknownFunctionPointerType unparsedEntityDecl;
    CDUnknownFunctionPointerType setDocumentLocator;
    CDUnknownFunctionPointerType startDocument;
    CDUnknownFunctionPointerType endDocument;
    CDUnknownFunctionPointerType startElement;
    CDUnknownFunctionPointerType endElement;
    CDUnknownFunctionPointerType reference;
    CDUnknownFunctionPointerType characters;
    CDUnknownFunctionPointerType ignorableWhitespace;
    CDUnknownFunctionPointerType processingInstruction;
    CDUnknownFunctionPointerType comment;
    CDUnknownFunctionPointerType warning;
    CDUnknownFunctionPointerType error;
    CDUnknownFunctionPointerType fatalError;
    CDUnknownFunctionPointerType getParameterEntity;
    CDUnknownFunctionPointerType cdataBlock;
    CDUnknownFunctionPointerType externalSubset;
    unsigned int initialized;
    void *_private;
    CDUnknownFunctionPointerType startElementNs;
    CDUnknownFunctionPointerType endElementNs;
    CDUnknownFunctionPointerType serror;
};

struct _xmlValidState;

struct aes_key_st {
    unsigned int _field1[60];
    int _field2;
};

struct array<unsigned char, 16UL> {
    unsigned char _field1[16];
};

struct atomic<audiobase::fx::RecordStageType> {
    struct __cxx_atomic_impl<audiobase::fx::RecordStageType, std::__cxx_atomic_base_impl<audiobase::fx::RecordStageType>> {
        _Atomic int __a_value;
    } __a_;
};

struct atomic<bool> {
    struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
};

struct atomic<unsigned char> {
    struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> {
        _Atomic unsigned char __a_value;
    } __a_;
};

struct atomic<unsigned int> {
    struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> {
        _Atomic unsigned int __a_value;
    } __a_;
};

struct atomic<unsigned long long> {
    struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> {
        _Atomic unsigned long long __a_value;
    } __a_;
};

struct atomic<unsigned long> {
    struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> {
        _Atomic unsigned long long __a_value;
    } __a_;
};

struct atomic_flag {
    struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
};

struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> {
    struct __compressed_pair<std::basic_string<char16_t>::__rep, std::allocator<char16_t>> {
        struct __rep {
            union {
                struct __long {
                    unsigned short *_field1;
                    unsigned long long _field2;
                    unsigned int :63;
                    unsigned int :1;
                } _field1;
                struct __short {
                    unsigned short _field1[11];
                    unsigned char _field2[1];
                    unsigned int :7;
                    unsigned int :1;
                } _field2;
                struct __raw _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct blockMotionPrams {
    float _field1;
    int _field2;
    float _field3;
    float _field4;
    int _field5;
};

struct cacheCmp;

struct cacheElement;

struct circle_buffer {
    unsigned long long m_read_pos;
    unsigned long long m_write_pos;
    unsigned long long m_size;
    unsigned long long m_capacity;
    char *m_data;
};

struct deque<TPAudioRouteDescription, std::allocator<TPAudioRouteDescription>> {
    struct __split_buffer<TPAudioRouteDescription *, std::allocator<TPAudioRouteDescription *>> {
        struct TPAudioRouteDescription **__first_;
        struct TPAudioRouteDescription **__begin_;
        struct TPAudioRouteDescription **__end_;
        struct __compressed_pair<TPAudioRouteDescription **, std::allocator<TPAudioRouteDescription *>> {
            struct TPAudioRouteDescription **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<TPAudioRouteDescription>> {
        unsigned long long __value_;
    } __size_;
};

struct deque<WCFinderTaskFIFOTask *, std::allocator<WCFinderTaskFIFOTask *>> {
    struct __split_buffer<WCFinderTaskFIFOTask *__strong *, std::allocator<WCFinderTaskFIFOTask *__strong *>> {
        id **__first_;
        id **__begin_;
        id **__end_;
        struct __compressed_pair<WCFinderTaskFIFOTask *__strong **, std::allocator<WCFinderTaskFIFOTask *__strong *>> {
            id **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<WCFinderTaskFIFOTask *>> {
        unsigned long long __value_;
    } __size_;
};

struct deque<WCFinderTaskLIFOTask *, std::allocator<WCFinderTaskLIFOTask *>> {
    struct __split_buffer<WCFinderTaskLIFOTask *__strong *, std::allocator<WCFinderTaskLIFOTask *__strong *>> {
        id **__first_;
        id **__begin_;
        id **__end_;
        struct __compressed_pair<WCFinderTaskLIFOTask *__strong **, std::allocator<WCFinderTaskLIFOTask *__strong *>> {
            id **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<WCFinderTaskLIFOTask *>> {
        unsigned long long __value_;
    } __size_;
};

struct deque<std::string, std::allocator<std::string>> {
    struct __split_buffer<std::string *, std::allocator<std::string *>> {
        void **__first_;
        void **__begin_;
        void **__end_;
        struct __compressed_pair<std::string **, std::allocator<std::string *>> {
            void **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<std::string>> {
        unsigned long long __value_;
    } __size_;
};

struct deque<std::unique_ptr<liteav::audio::AudioFrame>, std::allocator<std::unique_ptr<liteav::audio::AudioFrame>>> {
    struct __split_buffer<std::unique_ptr<liteav::audio::AudioFrame>*, std::allocator<std::unique_ptr<liteav::audio::AudioFrame>*>> {
        void **__first_;
        void **__begin_;
        void **__end_;
        struct __compressed_pair<std::unique_ptr<liteav::audio::AudioFrame>**, std::allocator<std::unique_ptr<liteav::audio::AudioFrame>*>> {
            void **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<std::unique_ptr<liteav::audio::AudioFrame>>> {
        unsigned long long __value_;
    } __size_;
};

struct deque<std::unique_ptr<liteav::video::VideoFrame>, std::allocator<std::unique_ptr<liteav::video::VideoFrame>>> {
    struct __split_buffer<std::unique_ptr<liteav::video::VideoFrame>*, std::allocator<std::unique_ptr<liteav::video::VideoFrame>*>> {
        void **__first_;
        void **__begin_;
        void **__end_;
        struct __compressed_pair<std::unique_ptr<liteav::video::VideoFrame>**, std::allocator<std::unique_ptr<liteav::video::VideoFrame>*>> {
            void **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<std::unique_ptr<liteav::video::VideoFrame>>> {
        unsigned long long __value_;
    } __size_;
};

struct deque<void (^)(), std::allocator<void (^)()>> {
    struct __split_buffer<void (^__strong *)(), std::allocator<void (^__strong *)()>> {
        CDUnknownBlockType **__first_;
        CDUnknownBlockType **__begin_;
        CDUnknownBlockType **__end_;
        struct __compressed_pair<void (^__strong **)(), std::allocator<void (^__strong *)()>> {
            CDUnknownBlockType **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<void (^)()>> {
        unsigned long long __value_;
    } __size_;
};

struct function<XMJILinkLoginParams ()> {
    struct __value_func<XMJILinkLoginParams ()> {
        struct type _field1;
        void *_field2;
    } _field1;
};

struct function<bool (const char *, const char *, int (*)(void *, int, const char **, const char **), void *, char **)> {
    struct __value_func<bool (const char *, const char *, int (*)(void *, int, const char **, const char **), void *, char **)> {
        struct type _field1;
        void *_field2;
    } _field1;
};

struct function<bool (const std::shared_ptr<ChatLogSessionItem>&, const std::shared_ptr<ChatLogSessionItem>&)> {
    struct __value_func<bool (const std::shared_ptr<ChatLogSessionItem>&, const std::shared_ptr<ChatLogSessionItem>&)> {
        struct type _field1;
        void *_field2;
    } _field1;
};

struct function<bool (const std::string &, const std::string &)> {
    struct __value_func<bool (const std::string &, const std::string &)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<bool (const std::string &, const std::string &, unsigned long, const audiobase::fx::AudioBlock &)> {
    struct __value_func<bool (const std::string &, const std::string &, unsigned long, const audiobase::fx::AudioBlock &)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<const WCDB::BaseBinding *()> {
    struct __value_func<const WCDB::BaseBinding *()> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<std::unique_ptr<fml::Mapping>()> {
    struct __value_func<std::unique_ptr<fml::Mapping>()> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<std::vector<std::unique_ptr<const fml::Mapping>>()> {
    struct __value_func<std::vector<std::unique_ptr<const fml::Mapping>>()> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void ()> {
    struct __value_func<void ()> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (AVCapturePhoto *)> {
    struct __value_func<void (AVCapturePhoto *)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (CGSize, CGAffineTransform)> {
    struct __value_func<void (CGSize, CGAffineTransform)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (CGSize, CGAffineTransform, double)> {
    struct __value_func<void (CGSize, CGAffineTransform, double)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (WCDB::InnerDatabase *&)> {
    struct __value_func<void (WCDB::InnerDatabase *&)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (__sFILE *)> {
    struct __value_func<void (__sFILE *)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (audiobase::fx::ProcessStage, unsigned long, const audiobase::fx::parameter::Parameter &, audiobase::fx::parameter::Category)> {
    struct __value_func<void (audiobase::fx::ProcessStage, unsigned long, const audiobase::fx::parameter::Parameter &, audiobase::fx::parameter::Category)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (const char *, long)> {
    struct __value_func<void (const char *, long)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (const char *, std::vector<sqlitelint::Issue>)> {
    struct __value_func<void (const char *, std::vector<sqlitelint::Issue>)> {
        struct type _field1;
        void *_field2;
    } _field1;
};

struct function<void (const flutter::DartIsolate &)> {
    struct __value_func<void (const flutter::DartIsolate &)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (const flutter::FrameTiming &)> {
    struct __value_func<void (const flutter::FrameTiming &)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (const puppet::fdn::Memory *, unsigned int, unsigned int)> {
    struct __value_func<void (const puppet::fdn::Memory *, unsigned int, unsigned int)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (const std::string &, const std::string &)> {
    struct __value_func<void (const std::string &, const std::string &)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (const std::string &, long long, const std::string &)> {
    struct __value_func<void (const std::string &, long long, const std::string &)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (const std::string &, long long, const std::vector<std::string>&, const std::string &)> {
    struct __value_func<void (const std::string &, long long, const std::vector<std::string>&, const std::string &)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (long long)> {
    struct __value_func<void (long long)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (long)> {
    struct __value_func<void (long)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (long, std::function<void ()>)> {
    struct __value_func<void (long, std::function<void ()>)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (opaqueCMSampleBuffer *)> {
    struct __value_func<void (opaqueCMSampleBuffer *)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (opaqueCMSampleBuffer *, AVCaptureDevicePosition)> {
    struct __value_func<void (opaqueCMSampleBuffer *, AVCaptureDevicePosition)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (std::shared_ptr<WCDB::InnerHandle>&)> {
    struct __value_func<void (std::shared_ptr<WCDB::InnerHandle>&)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (std::unique_ptr<flutter::FrameTimingsRecorder>)> {
    struct __value_func<void (std::unique_ptr<flutter::FrameTimingsRecorder>)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (unsigned long, const audiobase::fx::parameter::Parameter &, audiobase::fx::parameter::Category)> {
    struct __value_func<void (unsigned long, const audiobase::fx::parameter::Parameter &, audiobase::fx::parameter::Category)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct internal_state;

struct list<InfoItem, std::allocator<InfoItem>> {
    struct __list_node_base<InfoItem, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<InfoItem, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<WCDB::Syntax::Expression, std::allocator<WCDB::Syntax::Expression>> {
    struct __list_node_base<WCDB::Syntax::Expression, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCDB::Syntax::Expression, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<WCDB::Syntax::OrderingTerm, std::allocator<WCDB::Syntax::OrderingTerm>> {
    struct __list_node_base<WCDB::Syntax::OrderingTerm, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCDB::Syntax::OrderingTerm, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<liteav::LogUploaderInterface::InstanceInfo, std::allocator<liteav::LogUploaderInterface::InstanceInfo>> {
    struct __list_node_base<liteav::LogUploaderInterface::InstanceInfo, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<liteav::LogUploaderInterface::InstanceInfo, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<mars::cdn::TlvMeta, std::allocator<mars::cdn::TlvMeta>> {
    struct __list_node_base<mars::cdn::TlvMeta, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<mars::cdn::TlvMeta, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<mars::comm::ConnRecord, std::allocator<mars::comm::ConnRecord>> {
    struct __list_node_base<mars::comm::ConnRecord, void *> {
        void *_field1;
        void *_field2;
    } _field1;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<mars::comm::ConnRecord, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>> {
    struct __list_node_base<std::shared_ptr<POPAnimatorItem>, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::shared_ptr<POPAnimatorItem>, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<std::string, std::allocator<std::string>> {
    struct __list_node_base<std::string, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::string, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<unsigned int, std::allocator<unsigned int>> {
    struct __list_node_base<unsigned int, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<unsigned int, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<vboost::signals2::connection, std::allocator<vboost::signals2::connection>> {
    struct __list_node_base<vboost::signals2::connection, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<vboost::signals2::connection, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct mach_header {
    unsigned int _field1;
    int _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct map<CMTime, MJTrimSnapInfo *, CMTimeComparator, std::allocator<std::pair<const CMTime, MJTrimSnapInfo *>>> {
    struct __tree<std::__value_type<CMTime, MJTrimSnapInfo *>, std::__map_value_compare<CMTime, std::__value_type<CMTime, MJTrimSnapInfo *>, CMTimeComparator>, std::allocator<std::__value_type<CMTime, MJTrimSnapInfo *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<CMTime, MJTrimSnapInfo *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<CMTime, std::__value_type<CMTime, MJTrimSnapInfo *>, CMTimeComparator>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<MJRectCorner, UIView *, std::less<MJRectCorner>, std::allocator<std::pair<const MJRectCorner, UIView *>>> {
    struct __tree<std::__value_type<MJRectCorner, UIView *>, std::__map_value_compare<MJRectCorner, std::__value_type<MJRectCorner, UIView *>, std::less<MJRectCorner>>, std::allocator<std::__value_type<MJRectCorner, UIView *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<MJRectCorner, UIView *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<MJRectCorner, std::__value_type<MJRectCorner, UIView *>, std::less<MJRectCorner>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<NSString *, bool, CompareNSString, std::allocator<std::pair<NSString *const, bool>>> {
    struct __tree<std::__value_type<NSString *, bool>, std::__map_value_compare<NSString *, std::__value_type<NSString *, bool>, CompareNSString>, std::allocator<std::__value_type<NSString *, bool>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<NSString *, bool>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, bool>, CompareNSString>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<NSString *, long, WCFinderMapStringKey, std::allocator<std::pair<NSString *const, long>>> {
    struct __tree<std::__value_type<NSString *, long>, std::__map_value_compare<NSString *, std::__value_type<NSString *, long>, WCFinderMapStringKey>, std::allocator<std::__value_type<NSString *, long>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<NSString *, long>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, long>, WCFinderMapStringKey>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<NSString *, std::__list_iterator<InfoItem, void *>, RecardEqualID, std::allocator<std::pair<NSString *const, std::__list_iterator<InfoItem, void *>>>> {
    struct __tree<std::__value_type<NSString *, std::__list_iterator<InfoItem, void *>>, std::__map_value_compare<NSString *, std::__value_type<NSString *, std::__list_iterator<InfoItem, void *>>, RecardEqualID>, std::allocator<std::__value_type<NSString *, std::__list_iterator<InfoItem, void *>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<NSString *, std::__list_iterator<InfoItem, void *>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, std::__list_iterator<InfoItem, void *>>, RecardEqualID>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>, CompareNSString, std::allocator<std::pair<NSString *const, std::vector<std::shared_ptr<ChatLogSessionItem>>>>> {
    struct __tree<std::__value_type<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>>, std::__map_value_compare<NSString *, std::__value_type<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>>, CompareNSString>, std::allocator<std::__value_type<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>>, void *>>> __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>>, CompareNSString>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>, std::less<NSString *>, std::allocator<std::pair<NSString *const, std::vector<std::shared_ptr<ChatLogSessionItem>>>>> {
    struct __tree<std::__value_type<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>>, std::__map_value_compare<NSString *, std::__value_type<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>>, std::less<NSString *>>, std::allocator<std::__value_type<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>>, void *>>> __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, std::vector<std::shared_ptr<ChatLogSessionItem>>>, std::less<NSString *>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<NSString *, std::weak_ptr<WCDBSharedLock>, WCDBStringComparator, std::allocator<std::pair<NSString *const, std::weak_ptr<WCDBSharedLock>>>> {
    struct __tree<std::__value_type<NSString *, std::weak_ptr<WCDBSharedLock>>, std::__map_value_compare<NSString *, std::__value_type<NSString *, std::weak_ptr<WCDBSharedLock>>, WCDBStringComparator>, std::allocator<std::__value_type<NSString *, std::weak_ptr<WCDBSharedLock>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<NSString *, std::weak_ptr<WCDBSharedLock>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, std::weak_ptr<WCDBSharedLock>>, WCDBStringComparator>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<OMCCaptionItem *, MJCaptionLabel *, OMCCaptionItemCompare, std::allocator<std::pair<OMCCaptionItem *const, MJCaptionLabel *>>> {
    struct __tree<std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, std::__map_value_compare<OMCCaptionItem *, std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, OMCCaptionItemCompare>, std::allocator<std::__value_type<OMCCaptionItem *, MJCaptionLabel *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<OMCCaptionItem *, std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, OMCCaptionItemCompare>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<TPCodecID, TPVCodecMaxCapability, std::less<TPCodecID>, std::allocator<std::pair<const TPCodecID, TPVCodecMaxCapability>>> {
    struct __tree<std::__value_type<TPCodecID, TPVCodecMaxCapability>, std::__map_value_compare<TPCodecID, std::__value_type<TPCodecID, TPVCodecMaxCapability>, std::less<TPCodecID>>, std::allocator<std::__value_type<TPCodecID, TPVCodecMaxCapability>>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<TPCodecID, TPVCodecMaxCapability>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__map_value_compare<TPCodecID, std::__value_type<TPCodecID, TPVCodecMaxCapability>, std::less<TPCodecID>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<TPPlayerConnectionNode::Action, TPPlayerConnectionNode::ConfigMaps, std::less<TPPlayerConnectionNode::Action>, std::allocator<std::pair<const TPPlayerConnectionNode::Action, TPPlayerConnectionNode::ConfigMaps>>> {
    struct __tree<std::__value_type<TPPlayerConnectionNode::Action, TPPlayerConnectionNode::ConfigMaps>, std::__map_value_compare<TPPlayerConnectionNode::Action, std::__value_type<TPPlayerConnectionNode::Action, TPPlayerConnectionNode::ConfigMaps>, std::less<TPPlayerConnectionNode::Action>>, std::allocator<std::__value_type<TPPlayerConnectionNode::Action, TPPlayerConnectionNode::ConfigMaps>>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<TPPlayerConnectionNode::Action, TPPlayerConnectionNode::ConfigMaps>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__map_value_compare<TPPlayerConnectionNode::Action, std::__value_type<TPPlayerConnectionNode::Action, TPPlayerConnectionNode::ConfigMaps>, std::less<TPPlayerConnectionNode::Action>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<float>, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<float>>>> {
    struct __tree<std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<float>>, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<float>>, std::less<TPPlayerInitConfig::KeyType>>, std::allocator<std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<float>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<float>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<float>>, std::less<TPPlayerInitConfig::KeyType>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<int>, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<int>>>> {
    struct __tree<std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<int>>, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<int>>, std::less<TPPlayerInitConfig::KeyType>>, std::allocator<std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<int>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<int>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<int>>, std::less<TPPlayerInitConfig::KeyType>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<long long>, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<long long>>>> {
    struct __tree<std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<long long>>, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<long long>>, std::less<TPPlayerInitConfig::KeyType>>, std::allocator<std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<long long>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<long long>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, TPPlayerInitConfig::ConfigVal<long long>>, std::less<TPPlayerInitConfig::KeyType>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<TPPlayerInitConfig::KeyType, bool, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, bool>>> {
    struct __tree<std::__value_type<TPPlayerInitConfig::KeyType, bool>, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, bool>, std::less<TPPlayerInitConfig::KeyType>>, std::allocator<std::__value_type<TPPlayerInitConfig::KeyType, bool>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<TPPlayerInitConfig::KeyType, bool>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, bool>, std::less<TPPlayerInitConfig::KeyType>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<TPPlayerInitConfig::KeyType, std::deque<TPPlayerInitConfig::ConfigVal<int>>, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, std::deque<TPPlayerInitConfig::ConfigVal<int>>>>> {
    struct __tree<std::__value_type<TPPlayerInitConfig::KeyType, std::deque<TPPlayerInitConfig::ConfigVal<int>>>, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, std::deque<TPPlayerInitConfig::ConfigVal<int>>>, std::less<TPPlayerInitConfig::KeyType>>, std::allocator<std::__value_type<TPPlayerInitConfig::KeyType, std::deque<TPPlayerInitConfig::ConfigVal<int>>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<TPPlayerInitConfig::KeyType, std::deque<TPPlayerInitConfig::ConfigVal<int>>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, std::deque<TPPlayerInitConfig::ConfigVal<int>>>, std::less<TPPlayerInitConfig::KeyType>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<TPPlayerInitConfig::KeyType, std::deque<std::string>, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, std::deque<std::string>>>> {
    struct __tree<std::__value_type<TPPlayerInitConfig::KeyType, std::deque<std::string>>, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, std::deque<std::string>>, std::less<TPPlayerInitConfig::KeyType>>, std::allocator<std::__value_type<TPPlayerInitConfig::KeyType, std::deque<std::string>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<TPPlayerInitConfig::KeyType, std::deque<std::string>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, std::deque<std::string>>, std::less<TPPlayerInitConfig::KeyType>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<TPPlayerInitConfig::KeyType, std::shared_ptr<void>, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, std::shared_ptr<void>>>> {
    struct __tree<std::__value_type<TPPlayerInitConfig::KeyType, std::shared_ptr<void>>, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, std::shared_ptr<void>>, std::less<TPPlayerInitConfig::KeyType>>, std::allocator<std::__value_type<TPPlayerInitConfig::KeyType, std::shared_ptr<void>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<TPPlayerInitConfig::KeyType, std::shared_ptr<void>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, std::shared_ptr<void>>, std::less<TPPlayerInitConfig::KeyType>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<TPPlayerInitConfig::KeyType, std::string, std::less<TPPlayerInitConfig::KeyType>, std::allocator<std::pair<const TPPlayerInitConfig::KeyType, std::string>>> {
    struct __tree<std::__value_type<TPPlayerInitConfig::KeyType, std::string>, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, std::string>, std::less<TPPlayerInitConfig::KeyType>>, std::allocator<std::__value_type<TPPlayerInitConfig::KeyType, std::string>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<TPPlayerInitConfig::KeyType, std::string>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<TPPlayerInitConfig::KeyType, std::__value_type<TPPlayerInitConfig::KeyType, std::string>, std::less<TPPlayerInitConfig::KeyType>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<WCDBTag, WCDBRouterInfo *, std::less<WCDBTag>, std::allocator<std::pair<const WCDBTag, WCDBRouterInfo *>>> {
    struct __tree<std::__value_type<WCDBTag, WCDBRouterInfo *>, std::__map_value_compare<WCDBTag, std::__value_type<WCDBTag, WCDBRouterInfo *>, std::less<WCDBTag>>, std::allocator<std::__value_type<WCDBTag, WCDBRouterInfo *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<WCDBTag, WCDBRouterInfo *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<WCDBTag, std::__value_type<WCDBTag, WCDBRouterInfo *>, std::less<WCDBTag>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<WCDBTag, int, std::less<WCDBTag>, std::allocator<std::pair<const WCDBTag, int>>> {
    struct __tree<std::__value_type<WCDBTag, int>, std::__map_value_compare<WCDBTag, std::__value_type<WCDBTag, int>, std::less<WCDBTag>>, std::allocator<std::__value_type<WCDBTag, int>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<WCDBTag, int>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<WCDBTag, std::__value_type<WCDBTag, int>, std::less<WCDBTag>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<WeEffect::APP_SCENARIO, std::string, std::less<WeEffect::APP_SCENARIO>, std::allocator<std::pair<const WeEffect::APP_SCENARIO, std::string>>> {
    struct __tree<std::__value_type<WeEffect::APP_SCENARIO, std::string>, std::__map_value_compare<WeEffect::APP_SCENARIO, std::__value_type<WeEffect::APP_SCENARIO, std::string>, std::less<WeEffect::APP_SCENARIO>>, std::allocator<std::__value_type<WeEffect::APP_SCENARIO, std::string>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<WeEffect::APP_SCENARIO, std::string>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<WeEffect::APP_SCENARIO, std::__value_type<WeEffect::APP_SCENARIO, std::string>, std::less<WeEffect::APP_SCENARIO>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<WeEffect::CORE_MODEL, std::string, std::less<WeEffect::CORE_MODEL>, std::allocator<std::pair<const WeEffect::CORE_MODEL, std::string>>> {
    struct __tree<std::__value_type<WeEffect::CORE_MODEL, std::string>, std::__map_value_compare<WeEffect::CORE_MODEL, std::__value_type<WeEffect::CORE_MODEL, std::string>, std::less<WeEffect::CORE_MODEL>>, std::allocator<std::__value_type<WeEffect::CORE_MODEL, std::string>>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<WeEffect::CORE_MODEL, std::string>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__map_value_compare<WeEffect::CORE_MODEL, std::__value_type<WeEffect::CORE_MODEL, std::string>, std::less<WeEffect::CORE_MODEL>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<XID, XIntegerID<int, -1>, std::less<XID>, std::allocator<std::pair<const XID, XIntegerID<int, -1>>>> {
    struct __tree<std::__value_type<XID, XIntegerID<int, -1>>, std::__map_value_compare<XID, std::__value_type<XID, XIntegerID<int, -1>>, std::less<XID>>, std::allocator<std::__value_type<XID, XIntegerID<int, -1>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<XID, XIntegerID<int, -1>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<XID, std::__value_type<XID, XIntegerID<int, -1>>, std::less<XID>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<char *, char *, std::less<char *>, std::allocator<std::pair<char *const, char *>>> {
    struct __tree<std::__value_type<char *, char *>, std::__map_value_compare<char *, std::__value_type<char *, char *>, std::less<char *>>, std::allocator<std::__value_type<char *, char *>>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<char *, char *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__map_value_compare<char *, std::__value_type<char *, char *>, std::less<char *>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<float, double, std::less<float>, std::allocator<std::pair<const float, double>>> {
    struct __tree<std::__value_type<float, double>, std::__map_value_compare<float, std::__value_type<float, double>, std::less<float>>, std::allocator<std::__value_type<float, double>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<float, double>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<float, std::__value_type<float, double>, std::less<float>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<int, std::string, std::less<int>, std::allocator<std::pair<const int, std::string>>> {
    struct __tree<std::__value_type<int, std::string>, std::__map_value_compare<int, std::__value_type<int, std::string>, std::less<int>>, std::allocator<std::__value_type<int, std::string>>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<int, std::string>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::string>, std::less<int>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<long long, std::unique_ptr<HttpTask>, std::less<long long>, std::allocator<std::pair<const long long, std::unique_ptr<HttpTask>>>> {
    struct __tree<std::__value_type<long long, std::unique_ptr<HttpTask>>, std::__map_value_compare<long long, std::__value_type<long long, std::unique_ptr<HttpTask>>, std::less<long long>>, std::allocator<std::__value_type<long long, std::unique_ptr<HttpTask>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<long long, std::unique_ptr<HttpTask>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<long long, std::__value_type<long long, std::unique_ptr<HttpTask>>, std::less<long long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<long, Group, std::less<long>, std::allocator<std::pair<const long, Group>>> {
    struct __tree<std::__value_type<long, Group>, std::__map_value_compare<long, std::__value_type<long, Group>, std::less<long>>, std::allocator<std::__value_type<long, Group>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<long, Group>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, Group>, std::less<long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<long, MCOffsetRange, std::less<long>, std::allocator<std::pair<const long, MCOffsetRange>>> {
    struct __tree<std::__value_type<long, MCOffsetRange>, std::__map_value_compare<long, std::__value_type<long, MCOffsetRange>, std::less<long>>, std::allocator<std::__value_type<long, MCOffsetRange>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<long, MCOffsetRange>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, MCOffsetRange>, std::less<long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<long, SectionInfo, std::less<long>, std::allocator<std::pair<const long, SectionInfo>>> {
    struct __tree<std::__value_type<long, SectionInfo>, std::__map_value_compare<long, std::__value_type<long, SectionInfo>, std::less<long>>, std::allocator<std::__value_type<long, SectionInfo>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<long, SectionInfo>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, SectionInfo>, std::less<long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<long, WCCardChooseViewSectionType, std::less<long>, std::allocator<std::pair<const long, WCCardChooseViewSectionType>>> {
    struct __tree<std::__value_type<long, WCCardChooseViewSectionType>, std::__map_value_compare<long, std::__value_type<long, WCCardChooseViewSectionType>, std::less<long>>, std::allocator<std::__value_type<long, WCCardChooseViewSectionType>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<long, WCCardChooseViewSectionType>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, WCCardChooseViewSectionType>, std::less<long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<long, double, std::less<long>, std::allocator<std::pair<const long, double>>> {
    struct __tree<std::__value_type<long, double>, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>>, std::allocator<std::__value_type<long, double>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<long, double>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<long, mmsns::TimeLineSectionType, std::less<long>, std::allocator<std::pair<const long, mmsns::TimeLineSectionType>>> {
    struct __tree<std::__value_type<long, mmsns::TimeLineSectionType>, std::__map_value_compare<long, std::__value_type<long, mmsns::TimeLineSectionType>, std::less<long>>, std::allocator<std::__value_type<long, mmsns::TimeLineSectionType>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<long, mmsns::TimeLineSectionType>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, mmsns::TimeLineSectionType>, std::less<long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::pair<WCDBTag, WCTErrorCode>, std::vector<int>, std::less<std::pair<WCDBTag, WCTErrorCode>>, std::allocator<std::pair<const std::pair<WCDBTag, WCTErrorCode>, std::vector<int>>>> {
    struct __tree<std::__value_type<std::pair<WCDBTag, WCTErrorCode>, std::vector<int>>, std::__map_value_compare<std::pair<WCDBTag, WCTErrorCode>, std::__value_type<std::pair<WCDBTag, WCTErrorCode>, std::vector<int>>, std::less<std::pair<WCDBTag, WCTErrorCode>>>, std::allocator<std::__value_type<std::pair<WCDBTag, WCTErrorCode>, std::vector<int>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::pair<WCDBTag, WCTErrorCode>, std::vector<int>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::pair<WCDBTag, WCTErrorCode>, std::__value_type<std::pair<WCDBTag, WCTErrorCode>, std::vector<int>>, std::less<std::pair<WCDBTag, WCTErrorCode>>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::shared_ptr<ChatLogSessionItem>, long, std::less<std::shared_ptr<ChatLogSessionItem>>, std::allocator<std::pair<const std::shared_ptr<ChatLogSessionItem>, long>>> {
    struct __tree<std::__value_type<std::shared_ptr<ChatLogSessionItem>, long>, std::__map_value_compare<std::shared_ptr<ChatLogSessionItem>, std::__value_type<std::shared_ptr<ChatLogSessionItem>, long>, std::less<std::shared_ptr<ChatLogSessionItem>>>, std::allocator<std::__value_type<std::shared_ptr<ChatLogSessionItem>, long>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::shared_ptr<ChatLogSessionItem>, long>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::shared_ptr<ChatLogSessionItem>, std::__value_type<std::shared_ptr<ChatLogSessionItem>, long>, std::less<std::shared_ptr<ChatLogSessionItem>>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::string, std::map<std::string, std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::map<std::string, std::string>>>> {
    struct __tree<std::__value_type<std::string, std::map<std::string, std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::map<std::string, std::string>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::map<std::string, std::string>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::string, std::map<std::string, std::string>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::map<std::string, std::string>>, std::less<std::string>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>>> {
    struct __tree<std::__value_type<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>, std::less<std::string>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::string, std::shared_ptr<WssCallback>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<WssCallback>>>> {
    struct __tree<std::__value_type<std::string, std::shared_ptr<WssCallback>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<WssCallback>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::shared_ptr<WssCallback>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<WssCallback>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<WssCallback>>, std::less<std::string>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> {
    struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::string, std::vector<int>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<int>>>> {
    struct __tree<std::__value_type<std::string, std::vector<int>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<int>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<int>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<int>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<int>>, std::less<std::string>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>, std::less<std::string>, std::allocator<std::pair<const std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>>> {
    struct __tree<std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>, std::__map_value_compare<std::string, std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>, std::less<std::string>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc, std::less<std::string>, std::allocator<std::pair<const std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>>> {
    struct __tree<std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>, std::__map_value_compare<std::string, std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>, std::less<std::string>>, std::allocator<std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, xnet::dnn::DnnInferenceModelBase::TensorDesc>, std::less<std::string>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, OAKImageRequestEntity *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, OAKImageRequestEntity *>>> {
    struct __tree<std::__value_type<unsigned int, OAKImageRequestEntity *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, OAKImageRequestEntity *>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, OAKImageRequestEntity *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, OAKImageRequestEntity *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, OAKImageRequestEntity *>, std::less<unsigned int>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, ReaderTask, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, ReaderTask>>> {
    struct __tree<std::__value_type<unsigned int, ReaderTask>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, ReaderTask>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, ReaderTask>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, ReaderTask>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, ReaderTask>, std::less<unsigned int>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, WriterTask, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, WriterTask>>> {
    struct __tree<std::__value_type<unsigned int, WriterTask>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, WriterTask>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, WriterTask>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, WriterTask>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, WriterTask>, std::less<unsigned int>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> {
    struct __tree<std::__value_type<unsigned int, unsigned int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned int>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned int>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, unsigned long long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long long>>> {
    struct __tree<std::__value_type<unsigned int, unsigned long long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long long>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned long long>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long long>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long long>, std::less<unsigned int>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long long, OpaqueJSValue *, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, OpaqueJSValue *>>> {
    struct __tree<std::__value_type<unsigned long long, OpaqueJSValue *>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, OpaqueJSValue *>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, OpaqueJSValue *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, OpaqueJSValue *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, OpaqueJSValue *>, std::less<unsigned long long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long long, double, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, double>>> {
    struct __tree<std::__value_type<unsigned long long, double>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, double>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, double>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, double>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, double>, std::less<unsigned long long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long long, tagEmojiItem *, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, tagEmojiItem *>>> {
    struct __tree<std::__value_type<unsigned long long, tagEmojiItem *>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, tagEmojiItem *>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, tagEmojiItem *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, tagEmojiItem *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, tagEmojiItem *>, std::less<unsigned long long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long long, zidl::TaskIdConvertor::ClientIdContext, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> {
    struct __tree<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long, NSMutableDictionary *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, NSMutableDictionary *>>> {
    struct __tree<std::__value_type<unsigned long, NSMutableDictionary *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, NSMutableDictionary *>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, NSMutableDictionary *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned long, NSMutableDictionary *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, NSMutableDictionary *>, std::less<unsigned long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long, OpenServiceRowType, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, OpenServiceRowType>>> {
    struct __tree<std::__value_type<unsigned long, OpenServiceRowType>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, OpenServiceRowType>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, OpenServiceRowType>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned long, OpenServiceRowType>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, OpenServiceRowType>, std::less<unsigned long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long, audiobase::base::AudioSampleBuffer *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, audiobase::base::AudioSampleBuffer *>>> {
    struct __tree<std::__value_type<unsigned long, audiobase::base::AudioSampleBuffer *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, audiobase::base::AudioSampleBuffer *>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, audiobase::base::AudioSampleBuffer *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned long, audiobase::base::AudioSampleBuffer *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, audiobase::base::AudioSampleBuffer *>, std::less<unsigned long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> {
    struct __tree<std::__value_type<unsigned long, unsigned int>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned int>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, unsigned int>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned int>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned int>, std::less<unsigned long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> {
    struct __tree<std::__value_type<unsigned long, unsigned long>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, unsigned long>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<zidl::TaskIdConvertor::ClientIdContext, unsigned long long, std::less<zidl::TaskIdConvertor::ClientIdContext>, std::allocator<std::pair<const zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> {
    struct __tree<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>, std::allocator<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct mat<3, 3, float, glm::packed_highp> {
    struct vec<3, float, glm::packed_highp> _field1[3];
};

struct memory_file {
    int _field1;
    unsigned long long _field2;
    char *_field3;
    unsigned long long _field4;
    void *_field5;
};

struct multimap<NSString *, CGRect, WCFinderKeywordEqualId, std::allocator<std::pair<NSString *const, CGRect>>> {
    struct __tree<std::__value_type<NSString *, CGRect>, std::__map_value_compare<NSString *, std::__value_type<NSString *, CGRect>, WCFinderKeywordEqualId>, std::allocator<std::__value_type<NSString *, CGRect>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<NSString *, CGRect>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, CGRect>, WCFinderKeywordEqualId>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct multimap<NSString *, NSObject *, WCFinderMapStringKey, std::allocator<std::pair<NSString *const, NSObject *>>> {
    struct __tree<std::__value_type<NSString *, NSObject *>, std::__map_value_compare<NSString *, std::__value_type<NSString *, NSObject *>, WCFinderMapStringKey>, std::allocator<std::__value_type<NSString *, NSObject *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<NSString *, NSObject *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, NSObject *>, WCFinderMapStringKey>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct multimap<NSString *, UIView *, ClassIdentifyEqual, std::allocator<std::pair<NSString *const, UIView *>>> {
    struct __tree<std::__value_type<NSString *, UIView *>, std::__map_value_compare<NSString *, std::__value_type<NSString *, UIView *>, ClassIdentifyEqual>, std::allocator<std::__value_type<NSString *, UIView *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<NSString *, UIView *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, UIView *>, ClassIdentifyEqual>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct objc_method_description {
    SEL _field1;
    char *_field2;
};

struct opaqueCMSampleBuffer;

struct optional<CGRect> {
    union {
        char __null_state_;
        struct CGRect __val_;
    } ;
    _Bool __engaged_;
};

struct optional<CaraPredictionPositive *> {
    CDUnion_f780d1aa _field1;
    _Bool _field2;
};

struct optional<NSData *> {
    CDUnion_f780d1aa _field1;
    _Bool _field2;
};

struct optional<NSString *> {
    CDUnion_f780d1aa _field1;
    _Bool _field2;
};

struct optional<XMJILinkContextParamsExternalManaged> {
    union {
        char _field1;
        struct XMJILinkContextParamsExternalManaged _field2;
    } _field1;
    _Bool _field2;
};

struct optional<XMJILinkContextParamsSelfManaged> {
    union {
        char _field1;
        struct XMJILinkContextParamsSelfManaged _field2;
    } _field1;
    _Bool _field2;
};

struct optional<bool> {
    CDUnion_2739e4df _field1;
    _Bool _field2;
};

struct optional<float> {
    union {
        char _field1;
        float _field2;
    } _field1;
    _Bool _field2;
};

struct optional<int> {
    CDUnion_073fe123 _field1;
    _Bool _field2;
};

struct optional<std::string> {
    union {
        char __null_state_;
        basic_string_5909a4e2 __val_;
    } ;
    _Bool __engaged_;
};

struct optional<std::vector<std::string>> {
    union {
        char __null_state_;
        vector_bfe5b09a __val_;
    } ;
    _Bool __engaged_;
};

struct optional<wesvg::RGBAColor> {
    union {
        char __null_state_;
        struct RGBAColor __val_;
    } ;
    _Bool __engaged_;
};

struct optional<wesvg::RGBColor> {
    union {
        char _field1;
        struct RGBColor {
            unsigned char _field1;
            unsigned char _field2;
            unsigned char _field3;
        } _field2;
    } _field1;
    _Bool _field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct pair<NSData *, unsigned long> {
    id _field1;
    unsigned long long _field2;
};

struct pair<bool, KeyValueHolder> {
    _Bool _field1;
    struct KeyValueHolder _field2;
};

struct pair<double, double> {
    double _field1;
    double _field2;
};

struct pair<float, float> {
    float first;
    float second;
};

struct pair<std::vector<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>>, std::vector<MJTileReusableAttributes *>> {
    vector_e62d36fb _field1;
    vector_1d27761d _field2;
};

struct priority_queue<WCFinderTaskPQTask *, std::vector<WCFinderTaskPQTask *>, WCFinderTaskPQCMP> {
    struct vector<WCFinderTaskPQTask *, std::allocator<WCFinderTaskPQTask *>> c;
    struct WCFinderTaskPQCMP comp;
};

struct priority_queue<cacheElement, std::vector<cacheElement>, cacheCmp> {
    struct vector<cacheElement, std::allocator<cacheElement>> c;
    struct cacheCmp comp;
};

struct queue<std::string, std::deque<std::string>> {
    struct deque<std::string, std::allocator<std::string>> c;
};

struct queue<std::unique_ptr<liteav::audio::AudioFrame>, std::deque<std::unique_ptr<liteav::audio::AudioFrame>>> {
    struct deque<std::unique_ptr<liteav::audio::AudioFrame>, std::allocator<std::unique_ptr<liteav::audio::AudioFrame>>> c;
};

struct queue<std::unique_ptr<liteav::video::VideoFrame>, std::deque<std::unique_ptr<liteav::video::VideoFrame>>> {
    struct deque<std::unique_ptr<liteav::video::VideoFrame>, std::allocator<std::unique_ptr<liteav::video::VideoFrame>>> c;
};

struct queue<void (^)(), std::deque<void (^)()>> {
    struct deque<void (^)(), std::allocator<void (^)()>> c;
};

struct recursive_mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct scoped_nsobject<CADisplayLink> {
    CADisplayLink *object_;
};

struct scoped_nsobject<DelayingGestureRecognizer> {
    DelayingGestureRecognizer *object_;
};

struct scoped_nsobject<FlutterBasicMessageChannel> {
    FlutterBasicMessageChannel *object_;
};

struct scoped_nsobject<FlutterDartProject> {
    FlutterDartProject *object_;
};

struct scoped_nsobject<FlutterDartVMServicePublisher> {
    FlutterDartVMServicePublisher *object_;
};

struct scoped_nsobject<FlutterEngine> {
    FlutterEngine *object_;
};

struct scoped_nsobject<FlutterMethodChannel> {
    FlutterMethodChannel *object_;
};

struct scoped_nsobject<FlutterPlatformPlugin> {
    FlutterPlatformPlugin *object_;
};

struct scoped_nsobject<FlutterRestorationPlugin> {
    FlutterRestorationPlugin *object_;
};

struct scoped_nsobject<FlutterSpellCheckPlugin> {
    FlutterSpellCheckPlugin *object_;
};

struct scoped_nsobject<FlutterTextInputPlugin> {
    FlutterTextInputPlugin *object_;
};

struct scoped_nsobject<FlutterUndoManagerPlugin> {
    FlutterUndoManagerPlugin *object_;
};

struct scoped_nsobject<FlutterView> {
    FlutterView *object_;
};

struct scoped_nsobject<NSMutableSet<NSNumber *>> {
    NSMutableSet *object_;
};

struct scoped_nsobject<SemanticsObjectContainer> {
    SemanticsObjectContainer *object_;
};

struct scoped_nsobject<SpringAnimation> {
    SpringAnimation *object_;
};

struct scoped_nsobject<UIGestureRecognizer> {
    UIGestureRecognizer *object_;
};

struct scoped_nsobject<UIScrollView> {
    UIScrollView *object_;
};

struct scoped_nsobject<UIView> {
    UIView *object_;
};

struct scoped_nsobject<UIViewController> {
    UIViewController *object_;
};

struct scoped_refptr<lite_base::RefCountedData<liteav::BufferT<unsigned char>>> {
    void *ptr_;
};

struct scoped_refptr<lite_base::SingleThreadTaskRunner> {
    struct SingleThreadTaskRunner *ptr_;
};

struct scoped_refptr<lite_base::internal::BindStateBase> {
    struct BindStateBase *_field1;
};

struct scoped_refptr<liteav::OnlineLogger> {
    struct OnlineLogger *ptr_;
};

struct set<ITPAudioRouteManagerCallback *, std::less<ITPAudioRouteManagerCallback *>, std::allocator<ITPAudioRouteManagerCallback *>> {
    struct __tree<ITPAudioRouteManagerCallback *, std::less<ITPAudioRouteManagerCallback *>, std::allocator<ITPAudioRouteManagerCallback *>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<ITPAudioRouteManagerCallback *, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::less<ITPAudioRouteManagerCallback *>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct set<MCSegmentType, std::less<MCSegmentType>, std::allocator<MCSegmentType>> {
    struct __tree<MCSegmentType, std::less<MCSegmentType>, std::allocator<MCSegmentType>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<MCSegmentType, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::less<MCSegmentType>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct set<Protocol *, std::less<Protocol *>, std::allocator<Protocol *>> {
    struct __tree<Protocol *, std::less<Protocol *>, std::allocator<Protocol *>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<Protocol *, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::less<Protocol *>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct set<WCDBTag, std::less<WCDBTag>, std::allocator<WCDBTag>> {
    struct __tree<WCDBTag, std::less<WCDBTag>, std::allocator<WCDBTag>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<WCDBTag, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::less<WCDBTag>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct set<std::pair<unsigned long, unsigned int>, std::less<std::pair<unsigned long, unsigned int>>, std::allocator<std::pair<unsigned long, unsigned int>>> {
    struct __tree<std::pair<unsigned long, unsigned int>, std::less<std::pair<unsigned long, unsigned int>>, std::allocator<std::pair<unsigned long, unsigned int>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::pair<unsigned long, unsigned int>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::less<std::pair<unsigned long, unsigned int>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct set<std::string, std::less<std::string>, std::allocator<std::string>> {
    struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::string, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::less<std::string>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> {
    struct __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<unsigned int, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::less<unsigned int>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct sg_blend_state {
    _Bool _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    unsigned char _field8;
    int _field9;
    int _field10;
    int _field11;
    float _field12[4];
};

struct sg_context {
    unsigned int _field1;
};

struct sg_depth_stencil_state {
    struct sg_stencil_state _field1;
    struct sg_stencil_state _field2;
    int _field3;
    _Bool _field4;
    _Bool _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
};

struct sg_pass {
    unsigned int _field1;
};

struct sg_pipeline {
    unsigned int _field1;
};

struct sg_rasterizer_state {
    _Bool _field1;
    int _field2;
    int _field3;
    int _field4;
    float _field5;
    float _field6;
    float _field7;
};

struct sg_stencil_state {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct shared_ptr<CdnCallback> {
    struct CdnCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<ChatLogDataItem> {
    struct ChatLogDataItem *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<ChatLogSessionItem> {
    struct ChatLogSessionItem *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<CronetCallback> {
    struct CronetCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<CronetDownloadCallback> {
    struct CronetDownloadCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<CronetRequestCallback> {
    struct CronetRequestCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<CronetUploadCallback> {
    struct CronetUploadCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<ExpandUIConfig> {
    struct ExpandUIConfig *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<ITPPlayerRichMediaAsyncRequester> {
    struct ITPPlayerRichMediaAsyncRequester *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<ITPPlayerRichMediaProcessor> {
    struct ITPPlayerRichMediaProcessor *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<IlinkSDKCloudSessionCallback> {
    struct IlinkSDKCloudSessionCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<Kara::FeatureCenter::Text::FullTokenizer> {
    struct FullTokenizer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<LVUICallback> {
    struct LVUICallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<MBCronetDownloadCallback> {
    struct MBCronetDownloadCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<MMMetricsUploadFileObserver2> {
    struct MMMetricsUploadFileObserver2 *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<MMSMUploadFileObserver2> {
    struct MMSMUploadFileObserver2 *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<MyCallback> {
    struct MyCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<PLzmaSDKProgressDelegate> {
    struct PLzmaSDKProgressDelegate *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<POPAnimatorItem> {
    struct POPAnimatorItem *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<TPThumbPlayerEventRecordCallbackWrapper> {
    struct TPThumbPlayerEventRecordCallbackWrapper *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WAGameThreadWaitReady> {
    struct WAGameThreadWaitReady *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WAPkgCronetDownloadCallback> {
    struct WAPkgCronetDownloadCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WCDB::InnerHandle> {
    struct InnerHandle *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WCDB::StringView> {
    struct StringView *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WCDB::Syntax::Expression> {
    struct Expression *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WCDB::Syntax::Identifier> {
    struct Identifier *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WCDB::Syntax::SelectSTMT> {
    struct SelectSTMT *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WCDBSharedLock> {
    struct WCDBSharedLock *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WCFDMonitorThreadInfo> {
    struct WCFDMonitorThreadInfo *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WCURLSessionTaskCallBack> {
    struct WCURLSessionTaskCallBack *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WeVisionUtil::Layer> {
    struct Layer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WeVisionUtil::LayerCompositer> {
    struct LayerCompositer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WeXNet::MNXNetRuntime> {
    struct MNXNetRuntime *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WebNetCallBack> {
    struct WebNetCallBack *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<WxCronetGlobalCallback> {
    struct WxCronetGlobalCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<XMJAssetInfo> {
    struct XMJAssetInfo *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<XMJError> {
    struct XMJError *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<XMJLyricInfo> {
    struct XMJLyricInfo *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<XMJMaasCore> {
    struct XMJMaasCore *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<XMJMoviePlayer> {
    struct XMJMoviePlayer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<XMJMusicInfo> {
    struct XMJMusicInfo *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<XMJRenderView> {
    struct XMJRenderView *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<XMJTaskTrace> {
    struct XMJTaskTrace *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<XMJVideoAnalyzer> {
    struct XMJVideoAnalyzer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<__WCSN::__WCSBCP> {
    struct __WCSBCP *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<__WCSN::__WCSTECP> {
    struct __WCSTECP *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<affroam::RoamBackupPackageManagerDispatcher> {
    struct RoamBackupPackageManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<affroam::RoamBackupperDispatcher> {
    struct RoamBackupperDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<affroam::RoamDeviceManagerDispatcher> {
    struct RoamDeviceManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<affroam::RoamManagerDispatcher> {
    struct RoamManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<affroam::RoamMediaFormatterDispatcher> {
    struct RoamMediaFormatterDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<affroam::RoamTaskDispatcher> {
    struct RoamTaskDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<blink::BindingApp> {
    struct BindingApp *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<blink::HTMLCanvasViewNG> {
    struct HTMLCanvasViewNG *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<blink::IOSCanvasViewDelegateGL> {
    struct IOSCanvasViewDelegateGL *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<blink::ImageDecodeCache> {
    struct ImageDecodeCache *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<blink::ResourceLoader> {
    struct ResourceLoader *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraCppConsumeSessionProphetDispatcher> {
    struct CaraCppConsumeSessionProphetDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraCppDispatcher> {
    struct CaraCppDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraCppFinderPublishProphetDispatcher> {
    struct CaraCppFinderPublishProphetDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraCppJoinLiveQualityProphetDispatcher> {
    struct CaraCppJoinLiveQualityProphetDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraCppLiveCellProphetDispatcher> {
    struct CaraCppLiveCellProphetDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraCppLiveFeatureCenterDispatcher> {
    struct CaraCppLiveFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraCppLiveReddotProphetDispatcher> {
    struct CaraCppLiveReddotProphetDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraCppSessionFeatureCenterDispatcher> {
    struct CaraCppSessionFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeAccountFeatureCenterDispatcher> {
    struct CaraNativeAccountFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeConsumeSessionDispatcher> {
    struct CaraNativeConsumeSessionDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeContactDispatcher> {
    struct CaraNativeContactDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeContactFeatureCenterDispatcher> {
    struct CaraNativeContactFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeDiscoverViewFeatureCenterDispatcher> {
    struct CaraNativeDiscoverViewFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeFeatureCenterDispatcher> {
    struct CaraNativeFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeFinderFeatureCenterDispatcher> {
    struct CaraNativeFinderFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeFinderPublishProphetContextDispatcher> {
    struct CaraNativeFinderPublishProphetContextDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeJoinLiveQualityProphetContextDispatcher> {
    struct CaraNativeJoinLiveQualityProphetContextDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeLiveCellProphetContextDispatcher> {
    struct CaraNativeLiveCellProphetContextDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeLiveFeatureCenterDispatcher> {
    struct CaraNativeLiveFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeLiveReddotProphetContextDispatcher> {
    struct CaraNativeLiveReddotProphetContextDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeProphetPredictPositiveCallbackDispatcher> {
    struct CaraNativeProphetPredictPositiveCallbackDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<cara::CaraNativeSessionFeatureCenterDispatcher> {
    struct CaraNativeSessionFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<const fml::Mapping> {
    struct Mapping *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<cv::Mat> {
    struct Mat *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<ecs::EcsManagerDispatcher> {
    struct EcsManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<emoticon::EmoticonDesignerPortfolioPackDataSourceDispatcher> {
    struct EmoticonDesignerPortfolioPackDataSourceDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<emoticon::EmoticonFinderDesignerDataSourceDispatcher> {
    struct EmoticonFinderDesignerDataSourceDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<emoticon::EmoticonMetaStorageDispatcher> {
    struct EmoticonMetaStorageDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<flutter::AssetManager> {
    struct AssetManager *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<flutter::FlutterPlatformViewsController> {
    struct FlutterPlatformViewsController *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<flutter::PlatformMessageHandler> {
    struct PlatformMessageHandler *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<flutter::ProfilerMetricsIOS> {
    struct ProfilerMetricsIOS *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<flutter::SamplingProfiler> {
    struct SamplingProfiler *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<flutter::ThreadHost> {
    struct ThreadHost *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<impeller::ContextMTL> {
    struct ContextMTL *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::CppUtil> {
    struct CppUtil *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::IAppKinda> {
    struct IAppKinda *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::IAsyncTask> {
    struct IAsyncTask *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::ITransmitKvData> {
    struct ITransmitKvData *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::IUIModal> {
    struct IUIModal *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::IUIPage> {
    struct IUIPage *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KBankCardTypePickerViewOnSelectCallback> {
    struct KBankCardTypePickerViewOnSelectCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KBankEditViewOnSeletBankCallback> {
    struct KBankEditViewOnSeletBankCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KCardNumberEditViewOnTextChangedCallback> {
    struct KCardNumberEditViewOnTextChangedCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KCardNumberEditViewOnTextEndEditingCallback> {
    struct KCardNumberEditViewOnTextEndEditingCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KCardTypePickerViewOnSelectCallback> {
    struct KCardTypePickerViewOnSelectCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KCgi> {
    struct KCgi *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KCountPickerViewOnSelectCallback> {
    struct KCountPickerViewOnSelectCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KCountryCallingCodeViewOnSelectCallback> {
    struct KCountryCallingCodeViewOnSelectCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KDatePickerViewOnSelectCallback> {
    struct KDatePickerViewOnSelectCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KEditTextOnEditorActionCallback> {
    struct KEditTextOnEditorActionCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KEditTextOnFocusChangeCallback> {
    struct KEditTextOnFocusChangeCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KEditTextOnTextBeginChangeCallback> {
    struct KEditTextOnTextBeginChangeCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KEditTextOnTextChangedCallback> {
    struct KEditTextOnTextChangedCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KEditTextOnTextEndEditingCallback> {
    struct KEditTextOnTextEndEditingCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KHorizontalScrollViewOnScrollCallback> {
    struct KHorizontalScrollViewOnScrollCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KListViewCallback> {
    struct KListViewCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KListViewOnScrollCallback> {
    struct KListViewOnScrollCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KNetworkMockManager> {
    struct KNetworkMockManager *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KPatternLockViewEndWithPatternCallback> {
    struct KPatternLockViewEndWithPatternCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KPatternLockViewOnInputInvalidPatternCallback> {
    struct KPatternLockViewOnInputInvalidPatternCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KProfessionEditViewOnSelectProfessionCallback> {
    struct KProfessionEditViewOnSelectProfessionCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KPwdInputViewOnEndEnterPasswordCallback> {
    struct KPwdInputViewOnEndEnterPasswordCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KPwdInputViewOnPasswordChangeCallback> {
    struct KPwdInputViewOnPasswordChangeCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KRegionEditViewOnRegionSelectedCallback> {
    struct KRegionEditViewOnRegionSelectedCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KScrollViewOnScrollCallback> {
    struct KScrollViewOnScrollCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KSecureEditTextOnTextChangedCallback> {
    struct KSecureEditTextOnTextChangedCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KSwitchViewOnChangeSwitchCallback> {
    struct KSwitchViewOnChangeSwitchCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KTableViewCellEditAction> {
    struct KTableViewCellEditAction *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KTableViewCellManager> {
    struct KTableViewCellManager *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KValidDatePickerViewOnSelectCallback> {
    struct KValidDatePickerViewOnSelectCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KViewOnClickCallback> {
    struct KViewOnClickCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KViewOnLongClickCallback> {
    struct KViewOnLongClickCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::KViewOnTouchCallback> {
    struct KViewOnTouchCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::TenpayCgiCallback> {
    struct TenpayCgiCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::UseCase> {
    struct UseCase *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidBinaryI32Callback> {
    struct VoidBinaryI32Callback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidBoolCallback> {
    struct VoidBoolCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidBoolI32Callback> {
    struct VoidBoolI32Callback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidBoolOptionCallback> {
    struct VoidBoolOptionCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidBoolStringCallback> {
    struct VoidBoolStringCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidBoolStringI32StringCallback> {
    struct VoidBoolStringI32StringCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidCallback> {
    struct VoidCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidF32F32BoolCallback> {
    struct VoidF32F32BoolCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidI64Callback> {
    struct VoidI64Callback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidITransmitKvDataCallback> {
    struct VoidITransmitKvDataCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidITransmitKvDataNoticeItemCallback> {
    struct VoidITransmitKvDataNoticeItemCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidKRectCallback> {
    struct VoidKRectCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidListCallback> {
    struct VoidListCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidStringBinaryCallback> {
    struct VoidStringBinaryCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidStringBoolCallback> {
    struct VoidStringBoolCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidStringCallback> {
    struct VoidStringCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidStringStringBinaryCallback> {
    struct VoidStringStringBinaryCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidStringStringCallback> {
    struct VoidStringStringCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<kinda::VoidStringStringStringCallback> {
    struct VoidStringStringStringCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<liteav::live::TXLiveBaseObserverImpl> {
    struct TXLiveBaseObserverImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<liteav::live::TXLivePlayerObserverImpl> {
    struct TXLivePlayerObserverImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<liteav::live::TXLivePushObserverImpl> {
    struct TXLivePushObserverImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<liteav::live::V2TXLivePlayerObserverImpl> {
    struct V2TXLivePlayerObserverImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<liteav::live::V2TXLivePusherObserverImpl> {
    struct V2TXLivePusherObserverImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<liteav::manager::AudioEffectManager> {
    struct AudioEffectManager *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<liteav::manager::BeautyManagerProxy> {
    struct BeautyManagerProxy *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<liteav::trtc::TRTCPipelineClient> {
    struct TRTCPipelineClient *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<liteav::video::NativePixelFrame> {
    struct NativePixelFrame *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<liteav::video::PixelFrameMetaData> {
    struct PixelFrameMetaData *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<liteav::video::RPSFramerateCallback> {
    struct RPSFramerateCallback *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<liteav::video::TXCVideoRpsFramerateCallback> {
    struct TXCVideoRpsFramerateCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<liteav::video::VideoConsumer::Client> {
    struct Client *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<liteav::video::VideoProducer::Client> {
    struct Client *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<liteav::video::VideoStats> {
    struct VideoStats *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<luggage::LiteAppReporter> {
    struct LiteAppReporter *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mars::cdn::Get3rdDnsCallback> {
    struct Get3rdDnsCallback *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mars::cdn::SNSVideoProfile> {
    struct SNSVideoProfile *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mars::cdn::TaskCallback> {
    struct TaskCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mars::cdn::VideoInfo> {
    struct VideoInfo *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mmfg::OcrApi> {
    struct OcrApi *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<pag::AnimatorListener> {
    struct AnimatorListener *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<pag::PAGAnimator> {
    struct PAGAnimator *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<pag::PAGDecoder> {
    struct PAGDecoder *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<pag::PAGImage> {
    struct PAGImage *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<pag::PAGLayer> {
    struct PAGLayer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<pag::PAGSurface> {
    struct PAGSurface *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<rfx::RfxPagFile> {
    struct RfxPagFile *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<rfx::RfxPagPlayer> {
    struct RfxPagPlayer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<rfx::RfxPagSurface> {
    struct RfxPagSurface *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<rfx::RfxThreadPool> {
    struct RfxThreadPool *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<skyline::PageConfig> {
    struct PageConfig *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<star::AffStarDataManagerDispatcher> {
    struct AffStarDataManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<star::AffStarManagerDispatcher> {
    struct AffStarManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<star::AffStarOptManagerDispatcher> {
    struct AffStarOptManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<star::AffStarSyncManagerDispatcher> {
    struct AffStarSyncManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<std::atomic<int>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::vector<float>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::vector<vm_region_info>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<tp_utils::TPAudioAttributes> {
    struct TPAudioAttributes *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<unit_rc::BaseRC> {
    struct BaseRC *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<unsigned char> {
    char *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<unsigned int> {
    unsigned int *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<voipmp::VoIPMPIlinkSDKStatAPIDispatcher> {
    struct VoIPMPIlinkSDKStatAPIDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<voipmp::VoIPMPSystemAuthAPIDispatcher> {
    struct VoIPMPSystemAuthAPIDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<voipmp::VoIPMPSystemAuthNativeAPIDispatcher> {
    struct VoIPMPSystemAuthNativeAPIDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<voipmp::VoipmpCoreApiServiceDispatcher> {
    struct VoipmpCoreApiServiceDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<voipmp::VoipmpCoreImplServiceDispatcher> {
    struct VoipmpCoreImplServiceDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<volatile bool> {
    _Bool *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vqm::VQMAPIDispatcher> {
    struct VQMAPIDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<vqm::VQMConfAPIDispatcher> {
    struct VQMConfAPIDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<vqm::VQMObserverDispatcher> {
    struct VQMObserverDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<wcrte::RTEAttachmentNativeItemDispatcher> {
    struct RTEAttachmentNativeItemDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<wenote::WeNoteAffDelegateDispatcher> {
    struct WeNoteAffDelegateDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<wenote::WeNoteCPPInstanceDispatcher> {
    struct WeNoteCPPInstanceDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<wenote::WeNoteFlutterInstanceDispatcher> {
    struct WeNoteFlutterInstanceDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<wenote::WenoteFlutterManagerDispatcher> {
    struct WenoteFlutterManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<wesvg::RenderElement> {
    struct RenderElement *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<wesvg::RenderModel> {
    struct RenderModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<wevision::HardwareBuffer> {
    struct HardwareBuffer *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<wevision::HardwareBufferTexture> {
    struct HardwareBufferTexture *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<wevision::WeImage<unsigned char>::Imp> {
    struct Imp *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<wevision::XImageFeat> {
    struct XImageFeat *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<wevision::XOneshotDet> {
    struct XOneshotDet *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<wxvoipsdk::ILinkPusherAudioDataCallback> {
    struct ILinkPusherAudioDataCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<wxvoipsdk::TRTCAudioEffectCallback> {
    struct TRTCAudioEffectCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<xnet::InferenceSession> {
    struct InferenceSession *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<xnet::Status> {
    struct Status *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<zidl::ObjHolder2> {
    struct ObjHolder2 *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<zidl::ObjHolder> {
    struct ObjHolder *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<zidl::ZClientInvoker> {
    struct ZClientInvoker *_field1;
    struct __shared_weak_count *_field2;
};

struct sk_sp<GrDirectContext> {
    struct GrDirectContext *fPtr;
};

struct sk_sp<SkData> {
    struct SkData *_field1;
};

struct sk_sp<SkImage> {
    struct SkImage *fPtr;
};

struct sk_sp<SkPathRef> {
    struct SkPathRef *fPtr;
};

struct sk_sp<SkSurface> {
    struct SkSurface *fPtr;
};

struct sk_sp<flutter::DlImage> {
    struct DlImage *fPtr;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct sockaddr_un {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[104];
};

struct span<const unsigned char, 18446744073709551615UL> {
    unsigned long long _field1;
    char *_field2;
};

struct stCloudVHWParam {
    unsigned short _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned short _field10;
};

struct stCmd {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct stEntryRow {
    int _field1;
    Class _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    id _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    _Bool _field16;
    id _field17;
    _Bool _field18;
    id _field19;
};

struct stSvrCtrlNewS2P_OUT {
    unsigned short iKbps;
    unsigned char cFps;
    unsigned char cIPeriod;
    unsigned char cRSLevel;
    unsigned char cQPmin;
    unsigned char cQPmax;
    unsigned char cHPPMaxLyr;
    unsigned char cSwitch;
    unsigned char cResolution;
    unsigned char cRsvd1;
    unsigned char cRsvd2;
    unsigned char cSkipFlag;
    unsigned char cIReqFlag;
};

struct stat {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    int _field7;
    struct timespec _field8;
    struct timespec _field9;
    struct timespec _field10;
    struct timespec _field11;
    long long _field12;
    long long _field13;
    int _field14;
    unsigned int _field15;
    unsigned int _field16;
    int _field17;
    long long _field18[2];
};

struct tagAVQualityReportInfo {
    struct tagMultiSendReport _field1[2];
    struct tagMultiRecvReport _field2[2];
    struct tagMultiRecvSubscribeReport _field3[2];
    struct tagScreenSendReport _field4;
    struct tagScreenRecvReport _field5;
    struct tagVHWEngineReport _field6;
    struct tagVCodec2EngineReport _field7;
    struct tagVideoArqSendReport _field8;
    struct tagVideoArqRecvReport _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    unsigned int _field40;
    unsigned int _field41;
    unsigned int _field42;
    unsigned int _field43;
    unsigned int _field44;
    unsigned int _field45;
    unsigned int _field46;
    unsigned int _field47;
    unsigned int _field48;
    unsigned int _field49;
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    unsigned int _field54;
    unsigned int _field55;
    unsigned int _field56;
    unsigned int _field57;
    unsigned int _field58;
    unsigned int _field59;
    unsigned int _field60;
    unsigned int _field61;
    unsigned int _field62;
    unsigned int _field63;
    unsigned int _field64;
    unsigned int _field65;
    unsigned int _field66;
    unsigned int _field67;
    unsigned int _field68;
    unsigned int _field69;
    unsigned int _field70;
    unsigned int _field71;
    unsigned int _field72;
    unsigned int _field73;
    unsigned int _field74;
    unsigned int _field75;
    unsigned int _field76;
    unsigned int _field77;
    unsigned int _field78;
    unsigned int _field79;
    unsigned int _field80;
    unsigned int _field81;
    unsigned int _field82;
    unsigned int _field83;
    unsigned int _field84;
    unsigned int _field85;
    unsigned int _field86;
    unsigned int _field87;
    unsigned int _field88;
    unsigned int _field89;
    unsigned int _field90;
    unsigned int _field91;
    unsigned int _field92;
    unsigned int _field93;
    unsigned int _field94;
    unsigned int _field95;
    unsigned int _field96;
    unsigned int _field97;
    unsigned int _field98;
    unsigned int _field99;
    unsigned int _field100;
    unsigned int _field101;
    unsigned int _field102;
    unsigned int _field103;
    unsigned int _field104;
    unsigned int _field105;
    unsigned int _field106;
    unsigned int _field107;
    unsigned int _field108;
    unsigned int _field109;
    unsigned int _field110;
    unsigned int _field111;
    unsigned int _field112;
    unsigned char _field113;
    unsigned char _field114;
    unsigned char _field115;
    unsigned int _field116;
    unsigned int _field117;
    unsigned int _field118;
    unsigned int _field119;
    unsigned int _field120;
    unsigned int _field121;
    unsigned int _field122;
    unsigned int _field123;
    unsigned short _field124;
    unsigned int _field125;
    unsigned int _field126;
    unsigned int _field127;
    unsigned int _field128;
    unsigned int _field129;
    unsigned int _field130;
    unsigned int _field131;
    unsigned int _field132;
    unsigned int _field133;
    unsigned int _field134;
    unsigned int _field135;
    unsigned int _field136;
    unsigned int _field137;
    int _field138;
    int _field139;
    int _field140;
    unsigned int _field141;
    unsigned short _field142;
    unsigned short _field143;
    unsigned short _field144;
    unsigned char _field145;
    unsigned char _field146;
    unsigned int _field147;
    unsigned int _field148;
    unsigned int _field149;
    unsigned int _field150;
    unsigned int _field151;
    unsigned int _field152;
    unsigned int _field153;
    unsigned int _field154;
    unsigned int _field155;
    unsigned int _field156;
    unsigned int _field157;
    unsigned int _field158;
    unsigned int _field159;
    unsigned int _field160;
    unsigned int _field161;
    unsigned int _field162;
    unsigned int _field163;
    unsigned int _field164;
    unsigned int _field165;
    unsigned int _field166;
    unsigned int _field167;
    unsigned int _field168;
    unsigned int _field169;
    unsigned int _field170;
    unsigned int _field171;
    unsigned int _field172;
    unsigned int _field173;
    unsigned int _field174;
    unsigned int _field175;
    unsigned int _field176;
    unsigned int _field177;
    unsigned int _field178;
    unsigned int _field179;
    unsigned int _field180;
    int _field181;
    int _field182;
    int _field183;
    int _field184;
    int _field185;
    unsigned int _field186;
    unsigned int _field187;
    unsigned int _field188;
    unsigned int _field189;
    unsigned char _field190;
    unsigned char _field191;
    unsigned short _field192;
    unsigned short _field193;
    unsigned short _field194;
    unsigned short _field195;
    unsigned short _field196;
    unsigned short _field197;
    unsigned short _field198;
    unsigned short _field199;
    unsigned short _field200;
    unsigned short _field201;
    unsigned char _field202;
    unsigned char _field203;
    unsigned char _field204;
    unsigned char _field205;
    unsigned char _field206;
    unsigned short _field207;
    unsigned short _field208;
    unsigned short _field209;
    unsigned short _field210;
    unsigned short _field211;
    unsigned short _field212;
    unsigned short _field213;
    unsigned short _field214;
    unsigned short _field215;
    unsigned short _field216;
    unsigned short _field217;
    unsigned short _field218;
    unsigned short _field219;
    unsigned short _field220;
    unsigned short _field221;
    unsigned short _field222;
    unsigned short _field223;
    unsigned short _field224;
    unsigned short _field225;
    unsigned short _field226;
    unsigned short _field227;
    unsigned short _field228;
    unsigned short _field229;
    unsigned short _field230;
    unsigned short _field231;
    unsigned short _field232;
    unsigned short _field233;
    unsigned short _field234;
    unsigned short _field235;
    unsigned short _field236;
    unsigned short _field237;
    unsigned short _field238;
    unsigned short _field239;
    unsigned short _field240;
    unsigned short _field241;
    unsigned short _field242;
    unsigned short _field243;
    unsigned short _field244;
    unsigned short _field245;
    unsigned short _field246;
    unsigned short _field247;
    unsigned short _field248;
    unsigned short _field249;
    unsigned short _field250;
    unsigned short _field251;
    unsigned short _field252;
    unsigned short _field253;
    unsigned short _field254;
    unsigned short _field255;
    unsigned short _field256;
    unsigned short _field257;
    unsigned short _field258;
    unsigned short _field259;
    unsigned short _field260;
    unsigned short _field261;
    unsigned short _field262;
    unsigned short _field263;
    unsigned short _field264;
    unsigned short _field265;
    unsigned short _field266;
    unsigned short _field267;
    unsigned short _field268;
    unsigned short _field269;
    unsigned int _field270;
    unsigned int _field271;
    unsigned int _field272;
    unsigned int _field273;
    unsigned int _field274;
    unsigned int _field275;
    unsigned int _field276;
    unsigned int _field277;
    unsigned int _field278;
    unsigned int _field279;
    unsigned int _field280;
    unsigned int _field281;
    unsigned int _field282;
    unsigned int _field283;
    unsigned int _field284;
    unsigned int _field285;
    unsigned int _field286;
    unsigned int _field287;
    unsigned int _field288;
    unsigned int _field289;
    unsigned char _field290;
    unsigned char _field291;
    unsigned char _field292;
    unsigned char _field293;
    unsigned char _field294;
    int _field295;
    unsigned int _field296;
    unsigned int _field297;
    unsigned int _field298;
    int _field299;
    unsigned short _field300;
    unsigned int _field301;
    unsigned short _field302;
    unsigned short _field303;
    unsigned short _field304;
    unsigned short _field305;
    unsigned short _field306;
    unsigned short _field307;
    unsigned short _field308;
    unsigned short _field309;
    unsigned short _field310;
    unsigned short _field311;
    unsigned short _field312;
    unsigned short _field313;
    unsigned short _field314;
    unsigned short _field315;
    unsigned int _field316;
    unsigned int _field317;
    unsigned int _field318;
    unsigned short _field319;
    unsigned short _field320;
    unsigned short _field321;
    unsigned short _field322;
    unsigned short _field323;
    unsigned short _field324;
    unsigned short _field325;
    unsigned short _field326;
    unsigned int _field327;
    unsigned int _field328;
    unsigned int _field329;
    unsigned int _field330;
    unsigned int _field331;
    unsigned int _field332;
    unsigned int _field333;
    unsigned int _field334;
    unsigned int _field335;
    unsigned int _field336;
    unsigned int _field337;
    unsigned int _field338;
    unsigned int _field339;
    unsigned int _field340;
    unsigned int _field341;
    unsigned int _field342;
    unsigned int _field343;
    unsigned int _field344;
    unsigned int _field345;
    unsigned int _field346;
    unsigned int _field347;
    unsigned int _field348;
    unsigned int _field349;
    unsigned int _field350;
    unsigned int _field351;
    unsigned int _field352;
    unsigned int _field353;
    unsigned int _field354;
    unsigned int _field355;
    unsigned int _field356;
    unsigned int _field357;
    unsigned int _field358;
    unsigned int _field359;
    int _field360;
    int _field361;
    unsigned int _field362;
    unsigned int _field363;
    int _field364;
    int _field365;
    int _field366;
    int _field367;
    int _field368;
    int _field369;
    int _field370;
    int _field371;
    int _field372;
    int _field373;
    int _field374;
    int _field375;
    unsigned short _field376;
    unsigned short _field377;
    unsigned short _field378;
    unsigned short _field379;
    unsigned short _field380;
    unsigned short _field381;
    unsigned short _field382;
    unsigned short _field383;
    unsigned char _field384;
    unsigned char _field385;
    unsigned char _field386;
    unsigned char _field387;
    unsigned char _field388;
    unsigned char _field389;
    int _field390;
    int _field391;
    int _field392;
    int _field393;
    int _field394;
    int _field395;
    int _field396;
    int _field397;
    unsigned int _field398;
    unsigned int _field399;
    unsigned int _field400;
    unsigned int _field401;
    unsigned int _field402;
    unsigned int _field403;
    unsigned int _field404;
    unsigned int _field405;
    unsigned int _field406;
    unsigned int _field407;
    unsigned int _field408;
    unsigned int _field409;
    unsigned int _field410;
    unsigned int _field411;
    int _field412;
    int _field413;
    int _field414;
    int _field415;
    int _field416;
    int _field417;
    int _field418;
    int _field419;
    int _field420;
    int _field421;
    unsigned int _field422;
    unsigned int _field423;
    unsigned int _field424;
    unsigned int _field425;
    unsigned int _field426;
    unsigned int _field427;
    unsigned int _field428;
    unsigned int _field429;
    unsigned int _field430;
    unsigned int _field431;
    unsigned int _field432;
    unsigned int _field433;
    unsigned int _field434;
    unsigned int _field435;
    unsigned int _field436;
    unsigned int _field437;
    unsigned int _field438;
    unsigned int _field439;
    unsigned int _field440;
    unsigned int _field441;
    unsigned int _field442;
    unsigned int _field443;
    unsigned int _field444;
    unsigned int _field445;
    unsigned int _field446;
    unsigned int _field447;
    unsigned int _field448;
    unsigned int _field449;
    unsigned int _field450;
    unsigned int _field451;
    unsigned int _field452;
    unsigned int _field453;
    unsigned int _field454;
    unsigned int _field455;
    unsigned int _field456;
    unsigned int _field457;
    unsigned int _field458;
    unsigned int _field459;
    unsigned int _field460;
    unsigned int _field461;
    unsigned int _field462;
    unsigned int _field463;
    unsigned int _field464;
    unsigned int _field465;
    unsigned int _field466;
    unsigned int _field467;
    unsigned int _field468;
    unsigned int _field469;
    unsigned int _field470;
    unsigned int _field471;
    unsigned int _field472;
    unsigned int _field473;
    unsigned int _field474;
    unsigned int _field475;
    unsigned int _field476;
    unsigned int _field477;
    unsigned int _field478;
    unsigned int _field479;
    unsigned short _field480;
    unsigned short _field481;
    unsigned int _field482;
    unsigned int _field483;
    unsigned int _field484;
    unsigned int _field485;
    unsigned int _field486;
    unsigned int _field487;
    unsigned int _field488;
    unsigned int _field489;
    long long _field490;
    unsigned short _field491;
    unsigned int _field492;
    unsigned int _field493;
    int _field494;
    int _field495;
    int _field496;
    int _field497;
    unsigned int _field498;
    unsigned int _field499;
    unsigned int _field500;
    unsigned int _field501;
    unsigned int _field502;
    unsigned int _field503;
    unsigned int _field504;
    unsigned int _field505;
    unsigned int _field506;
    int _field507;
    int _field508;
    unsigned short _field509;
    unsigned short _field510;
    unsigned short _field511;
    unsigned int _field512;
    unsigned int _field513;
    unsigned int _field514;
    unsigned int _field515;
    int _field516;
    int _field517;
    unsigned int _field518;
    unsigned int _field519;
    unsigned int _field520;
    char _field521[256];
    unsigned int _field522;
    unsigned int _field523;
    unsigned int _field524;
    unsigned int _field525;
    unsigned int _field526;
    unsigned int _field527;
    unsigned int _field528;
    unsigned int _field529;
    unsigned int _field530;
    unsigned int _field531;
    unsigned int _field532;
    unsigned int _field533;
    unsigned int _field534;
    unsigned short _field535;
    unsigned int _field536;
    unsigned int _field537;
    unsigned int _field538;
    unsigned int _field539;
    unsigned int _field540;
    unsigned int _field541;
    struct tagVCodec2HWEngineReport _field542;
    unsigned int _field543;
    unsigned int _field544;
    unsigned int _field545;
    unsigned int _field546;
    unsigned int _field547;
    unsigned int _field548;
    unsigned int _field549;
    unsigned int _field550;
    unsigned int _field551;
    unsigned int _field552;
    unsigned int _field553;
    unsigned int _field554;
    unsigned int _field555;
    unsigned int _field556;
    unsigned int _field557;
    unsigned int _field558;
    unsigned int _field559;
    unsigned int _field560;
    unsigned int _field561;
    unsigned int _field562;
    unsigned int _field563;
    unsigned int _field564;
    unsigned int _field565;
    unsigned int _field566;
    unsigned int _field567;
    unsigned int _field568;
    unsigned int _field569;
    unsigned int _field570;
    unsigned int _field571;
    unsigned int _field572;
    unsigned int _field573;
    unsigned int _field574;
    unsigned int _field575;
    unsigned int _field576;
    unsigned int _field577;
    unsigned int _field578;
    unsigned int _field579;
    unsigned int _field580;
    unsigned int _field581;
    unsigned int _field582;
    unsigned int _field583;
    unsigned int _field584;
    unsigned int _field585;
    unsigned int _field586;
    unsigned int _field587;
    unsigned int _field588;
    unsigned int _field589;
    unsigned int _field590;
    unsigned int _field591;
    unsigned int _field592;
    unsigned int _field593;
    unsigned int _field594;
    unsigned int _field595;
    unsigned int _field596;
    unsigned int _field597;
    unsigned int _field598;
    unsigned int _field599;
    unsigned int _field600;
    unsigned int _field601;
    unsigned int _field602;
    unsigned int _field603;
    unsigned int _field604;
    unsigned int _field605;
    unsigned int _field606;
    unsigned int _field607;
    unsigned int _field608;
    unsigned int _field609;
    unsigned int _field610;
    unsigned int _field611;
    unsigned int _field612;
    unsigned int _field613;
    unsigned int _field614;
    unsigned int _field615;
    unsigned int _field616;
    unsigned int _field617;
    unsigned int _field618;
    unsigned int _field619;
    unsigned int _field620;
    unsigned int _field621;
    unsigned int _field622;
    unsigned int _field623;
    unsigned int _field624;
    unsigned int _field625;
    unsigned int _field626;
    unsigned int _field627;
    unsigned int _field628;
    unsigned int _field629;
    unsigned int _field630;
    unsigned int _field631;
    unsigned int _field632;
    unsigned int _field633;
    unsigned int _field634;
    unsigned int _field635;
    unsigned int _field636;
    unsigned int _field637;
    unsigned int _field638;
    unsigned int _field639;
    unsigned int _field640;
    unsigned int _field641;
    unsigned int _field642;
    unsigned int _field643;
    unsigned int _field644;
    unsigned int _field645;
    unsigned int _field646;
    unsigned int _field647;
    unsigned int _field648;
    unsigned int _field649;
    unsigned int _field650;
    unsigned int _field651;
    unsigned int _field652;
    unsigned short _field653;
    unsigned short _field654;
    unsigned short _field655;
    unsigned short _field656;
    unsigned short _field657;
    unsigned short _field658;
    unsigned short _field659;
    unsigned short _field660;
    unsigned short _field661;
    unsigned short _field662;
    unsigned short _field663;
    unsigned short _field664;
    unsigned short _field665;
    unsigned short _field666;
    unsigned short _field667;
    unsigned short _field668;
    unsigned short _field669;
    unsigned short _field670;
    unsigned short _field671;
    unsigned short _field672;
    unsigned short _field673;
    unsigned int _field674;
    unsigned int _field675;
    unsigned int _field676;
    unsigned int _field677;
    unsigned int _field678;
    unsigned int _field679;
    unsigned int _field680;
    unsigned int _field681;
    unsigned int _field682;
    unsigned int _field683;
    unsigned int _field684;
    unsigned int _field685;
    unsigned int _field686;
    unsigned int _field687;
    unsigned int _field688;
    unsigned int _field689;
    unsigned int _field690;
    unsigned int _field691;
    unsigned int _field692;
    unsigned int _field693;
    unsigned int _field694;
    unsigned int _field695;
    unsigned int _field696;
    unsigned int _field697;
    unsigned int _field698;
    unsigned int _field699;
    unsigned int _field700;
    unsigned int _field701;
    unsigned int _field702;
    unsigned int _field703;
    unsigned int _field704;
    unsigned short _field705;
    unsigned short _field706;
    unsigned short _field707;
    unsigned short _field708;
    unsigned short _field709;
    unsigned short _field710;
    unsigned short _field711;
    unsigned short _field712;
    unsigned short _field713;
    unsigned short _field714;
    unsigned short _field715;
    unsigned int _field716;
    unsigned short _field717[256];
    unsigned short _field718[256];
    unsigned int _field719;
    unsigned int _field720;
    unsigned int _field721;
    unsigned int _field722;
    unsigned int _field723;
    unsigned int _field724;
    unsigned int _field725;
    unsigned int _field726;
    unsigned int _field727;
    unsigned int _field728;
    unsigned int _field729;
    unsigned int _field730;
    unsigned int _field731;
    unsigned int _field732;
    unsigned int _field733;
    unsigned int _field734;
    unsigned int _field735;
    unsigned int _field736;
    unsigned int _field737;
    unsigned int _field738;
    unsigned int _field739;
    unsigned int _field740;
    int _field741;
    int _field742;
    int _field743;
    int _field744;
    int _field745;
    int _field746;
    unsigned int _field747;
    unsigned int _field748;
    unsigned int _field749;
    unsigned int _field750;
    unsigned int _field751;
    unsigned int _field752;
    unsigned int _field753;
    unsigned int _field754;
    unsigned int _field755;
    unsigned int _field756;
    unsigned int _field757;
    unsigned int _field758;
    unsigned int _field759;
    unsigned int _field760;
    unsigned int _field761;
    unsigned int _field762;
    unsigned int _field763;
    unsigned int _field764;
    unsigned int _field765;
    unsigned int _field766;
    unsigned int _field767;
    unsigned int _field768;
    unsigned int _field769;
    unsigned int _field770;
    unsigned int _field771;
    unsigned int _field772;
    unsigned int _field773;
    unsigned int _field774;
    unsigned int _field775;
    unsigned int _field776;
    unsigned int _field777;
    unsigned int _field778;
    unsigned int _field779;
    unsigned int _field780;
    unsigned int _field781;
    unsigned int _field782;
    unsigned int _field783;
    unsigned int _field784;
    char _field785[256];
    unsigned int _field786;
    unsigned int _field787;
    unsigned int _field788;
    unsigned int _field789;
    unsigned int _field790;
    unsigned int _field791;
    unsigned int _field792;
    unsigned int _field793;
    unsigned int _field794;
    unsigned int _field795;
    unsigned int _field796;
    unsigned int _field797;
    unsigned int _field798;
    unsigned int _field799;
    unsigned int _field800;
    unsigned int _field801;
    unsigned int _field802;
    unsigned int _field803;
    unsigned int _field804;
    unsigned int _field805;
    unsigned int _field806;
    unsigned int _field807;
    unsigned int _field808;
    unsigned int _field809;
    unsigned int _field810;
    unsigned int _field811;
    unsigned int _field812;
    unsigned int _field813;
    unsigned int _field814;
    unsigned int _field815;
    unsigned int _field816;
    unsigned int _field817;
    unsigned int _field818;
    unsigned int _field819;
    unsigned int _field820;
    unsigned int _field821;
    unsigned int _field822;
    unsigned int _field823;
    unsigned int _field824;
    unsigned int _field825;
    unsigned int _field826;
    unsigned int _field827;
    unsigned int _field828;
    unsigned int _field829;
    unsigned int _field830;
    unsigned int _field831;
    unsigned int _field832;
    unsigned int _field833;
    unsigned int _field834;
    unsigned int _field835;
    unsigned int _field836;
    unsigned int _field837;
    unsigned int _field838;
    unsigned int _field839;
    unsigned int _field840;
    unsigned int _field841;
    unsigned int _field842;
    unsigned int _field843;
    unsigned int _field844;
    unsigned int _field845;
    unsigned int _field846;
    unsigned int _field847;
    unsigned int _field848;
    unsigned int _field849;
    unsigned int _field850;
    unsigned int _field851;
    unsigned int _field852;
    unsigned int _field853;
    unsigned int _field854;
    unsigned int _field855;
    unsigned int _field856;
    unsigned int _field857;
    unsigned int _field858;
    unsigned int _field859;
    unsigned int _field860;
    unsigned int _field861;
    unsigned int _field862;
    unsigned int _field863;
    unsigned int _field864;
    unsigned int _field865;
    unsigned int _field866;
    unsigned int _field867;
    unsigned int _field868;
    unsigned int _field869;
    unsigned int _field870;
    unsigned int _field871;
    unsigned int _field872;
    unsigned int _field873;
    unsigned int _field874;
    unsigned int _field875;
    unsigned int _field876;
    unsigned int _field877;
    unsigned int _field878;
    unsigned int _field879;
    unsigned int _field880;
    unsigned int _field881;
    unsigned int _field882;
    unsigned int _field883;
    unsigned int _field884;
    unsigned int _field885;
    unsigned int _field886;
    unsigned int _field887;
    unsigned int _field888;
    unsigned int _field889;
    unsigned int _field890;
    unsigned int _field891;
    unsigned int _field892;
    unsigned int _field893;
    unsigned int _field894;
    unsigned int _field895;
    unsigned int _field896;
    unsigned int _field897;
    unsigned int _field898;
    unsigned int _field899;
    int _field900;
    unsigned int _field901;
    unsigned int _field902;
    unsigned int _field903;
    int _field904;
    unsigned int _field905;
    unsigned int _field906;
    unsigned int _field907;
    unsigned int _field908;
    unsigned int _field909;
    unsigned int _field910;
    unsigned int _field911;
    unsigned int _field912;
    unsigned int _field913;
    unsigned int _field914;
    unsigned int _field915;
    unsigned int _field916;
    unsigned int _field917;
    unsigned int _field918;
    unsigned int _field919;
    unsigned int _field920;
    unsigned int _field921;
    unsigned int _field922;
    unsigned int _field923;
    unsigned int _field924;
    unsigned int _field925;
    unsigned int _field926;
    unsigned int _field927;
    unsigned int _field928;
    unsigned int _field929;
    unsigned int _field930;
    unsigned int _field931;
    unsigned int _field932;
    unsigned int _field933;
    unsigned int _field934;
    unsigned int _field935;
    unsigned int _field936;
    unsigned int _field937;
    unsigned int _field938;
    unsigned int _field939;
    unsigned int _field940;
    unsigned int _field941;
    unsigned int _field942;
    int _field943;
    int _field944;
    int _field945;
    unsigned int _field946;
    unsigned int _field947;
    unsigned int _field948;
    unsigned int _field949;
    unsigned int _field950;
    unsigned int _field951;
    unsigned int _field952;
    unsigned int _field953;
    unsigned int _field954;
    unsigned int _field955;
    unsigned int _field956;
    int _field957;
    char _field958[256];
    char _field959[256];
    int _field960;
    int _field961;
    int _field962;
    unsigned int _field963;
    unsigned int _field964;
    unsigned int _field965;
    unsigned int _field966;
    unsigned int _field967;
    unsigned int _field968;
    unsigned int _field969;
    unsigned int _field970;
    unsigned int _field971;
    unsigned int _field972;
    unsigned int _field973;
    unsigned int _field974;
    unsigned int _field975;
    unsigned int _field976;
    unsigned int _field977;
    unsigned int _field978;
    unsigned int _field979;
    unsigned int _field980;
    unsigned int _field981;
    int _field982;
    unsigned int _field983;
    unsigned int _field984;
    unsigned int _field985;
    unsigned int _field986;
    unsigned int _field987;
    unsigned int _field988;
    unsigned int _field989;
    unsigned int _field990;
    unsigned int _field991;
    unsigned int _field992;
    unsigned int _field993;
    unsigned int _field994;
    unsigned int _field995;
    unsigned int _field996;
    unsigned int _field997;
    unsigned int _field998;
    unsigned int _field999;
    unsigned int _field1000;
    unsigned int _field1001;
    unsigned int _field1002;
    unsigned int _field1003;
    unsigned int _field1004;
    unsigned int _field1005;
    unsigned int _field1006;
};

struct tagAccumulateValueForReport {
    unsigned int _field1;
    unsigned int _field2;
};

struct tagMultiRecvReport {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    unsigned int _field40;
    unsigned int _field41;
    unsigned int _field42;
    unsigned int _field43;
    unsigned int _field44;
    unsigned int _field45;
    unsigned int _field46;
    unsigned int _field47;
    unsigned int _field48;
    unsigned int _field49;
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    unsigned int _field54;
    unsigned int _field55;
    unsigned int _field56;
    unsigned int _field57;
    unsigned int _field58;
    unsigned int _field59;
    unsigned int _field60;
    unsigned int _field61;
    unsigned int _field62;
    unsigned int _field63;
    unsigned int _field64;
    unsigned int _field65;
    unsigned int _field66;
    unsigned int _field67;
    unsigned int _field68;
    unsigned int _field69;
    unsigned int _field70;
    unsigned int _field71;
    unsigned int _field72;
    unsigned int _field73;
    unsigned int _field74;
    unsigned int _field75;
    unsigned int _field76;
    unsigned int _field77;
    unsigned int _field78;
    unsigned int _field79;
    unsigned int _field80;
    unsigned int _field81;
    unsigned int _field82;
    unsigned int _field83;
    unsigned int _field84;
    unsigned int _field85;
    unsigned int _field86;
    unsigned int _field87;
    unsigned int _field88;
    unsigned int _field89;
    unsigned int _field90;
    unsigned int _field91;
    unsigned int _field92;
    unsigned int _field93;
    unsigned int _field94;
    unsigned int _field95;
    unsigned int _field96;
    unsigned int _field97;
    unsigned int _field98;
    unsigned int _field99;
    unsigned int _field100;
    unsigned int _field101;
    unsigned int _field102;
    struct tagVideoArqRecvReport _field103;
    unsigned int _field104;
    unsigned int _field105;
    unsigned int _field106;
};

struct tagMultiRecvSubscribeReport {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
};

struct tagMultiSendReport {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    unsigned int _field40;
    unsigned int _field41;
    unsigned int _field42;
    unsigned int _field43;
    unsigned int _field44;
    unsigned int _field45;
    unsigned int _field46;
    unsigned int _field47;
    unsigned int _field48;
    unsigned int _field49;
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    unsigned int _field54;
    unsigned int _field55;
    unsigned int _field56;
    unsigned int _field57;
    unsigned int _field58;
    unsigned int _field59;
    unsigned int _field60;
    unsigned int _field61;
    unsigned int _field62;
    unsigned int _field63;
    unsigned int _field64;
    unsigned int _field65;
    unsigned int _field66;
    unsigned int _field67;
    unsigned int _field68;
    unsigned int _field69;
    unsigned int _field70;
    unsigned int _field71;
    struct tagVideoArqSendReport _field72;
    unsigned int _field73;
    unsigned int _field74;
    unsigned int _field75;
};

struct tagScreenRecvReport {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct tagScreenSendReport {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
};

struct tagVCodec2EngineReport {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
};

struct tagVCodec2HWEngineReport {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
};

struct tagVHWEngineReport {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct tagVideoArqRecvReport {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct tagAccumulateValueForReport _field4;
    unsigned int _field5;
};

struct tagVideoArqSendReport {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    struct tagAccumulateValueForReport _field10;
};

struct tagVoipCallInfo {
    NSString *callerName;
    NSString *calleeName;
    int roomType;
    unsigned long long roomId;
    long long roomkey;
    long long timeStamp;
};

struct thread {
    struct _opaque_pthread_t *__t_;
};

struct timespec {
    long long _field1;
    long long _field2;
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

struct tuple<bool, bool, CGPoint> {
    struct __tuple_impl<std::__tuple_indices<0, 1, 2>, bool, bool, CGPoint> {
        _Bool _field1;
        _Bool _field2;
        struct CGPoint _field3;
    } _field1;
};

struct tuple<bool, const std::shared_ptr<std::vector<float>>&, float> {
    struct __tuple_impl<std::__tuple_indices<0, 1, 2>, bool, const std::shared_ptr<std::vector<float>>&, float> {
        _Bool _field1;
        void *_field2;
        float _field3;
    } _field1;
};

struct tuple<bool, double> {
    struct __tuple_impl<std::__tuple_indices<0, 1>, bool, double> {
        _Bool _field1;
        double _field2;
    } _field1;
};

struct type {
    unsigned char __lx[24];
};

struct unique_ptr<FFE::FastFocusEngie::Impl, std::default_delete<FFE::FastFocusEngie::Impl>> {
    struct __compressed_pair<FFE::FastFocusEngie::Impl *, std::default_delete<FFE::FastFocusEngie::Impl>> {
        struct Impl *__value_;
    } __ptr_;
};

struct unique_ptr<WeEffect::TrackerManager::TrackerManagerImpl, std::default_delete<WeEffect::TrackerManager::TrackerManagerImpl>> {
    struct __compressed_pair<WeEffect::TrackerManager::TrackerManagerImpl *, std::default_delete<WeEffect::TrackerManager::TrackerManagerImpl>> {
        struct TrackerManagerImpl *__value_;
    } __ptr_;
};

struct unique_ptr<WeEffect::X3DEffect, std::default_delete<WeEffect::X3DEffect>> {
    struct __compressed_pair<WeEffect::X3DEffect *, std::default_delete<WeEffect::X3DEffect>> {
        struct X3DEffect *__value_;
    } __ptr_;
};

struct unique_ptr<WeEffect::X3DGlobalContext::Impl, std::default_delete<WeEffect::X3DGlobalContext::Impl>> {
    struct __compressed_pair<WeEffect::X3DGlobalContext::Impl *, std::default_delete<WeEffect::X3DGlobalContext::Impl>> {
        struct Impl *__value_;
    } __ptr_;
};

struct unique_ptr<XMSHandleBoxSettings::XMSHandleBoxSettingsOpaque, std::default_delete<XMSHandleBoxSettings::XMSHandleBoxSettingsOpaque>> {
    struct __compressed_pair<XMSHandleBoxSettings::XMSHandleBoxSettingsOpaque *, std::default_delete<XMSHandleBoxSettings::XMSHandleBoxSettingsOpaque>> {
        struct XMSHandleBoxSettingsOpaque *__value_;
    } __ptr_;
};

struct unique_ptr<XPathOpaque, std::default_delete<XPathOpaque>> {
    struct __compressed_pair<XPathOpaque *, std::default_delete<XPathOpaque>> {
        struct XPathOpaque *__value_;
    } __ptr_;
};

struct unique_ptr<XSimpleFunction::Concept, std::default_delete<XSimpleFunction::Concept>> {
    struct __compressed_pair<XSimpleFunction::Concept *, std::default_delete<XSimpleFunction::Concept>> {
        struct Concept *__value_;
    } __ptr_;
};

struct unique_ptr<__sFILE, std::function<void (__sFILE *)>> {
    struct __compressed_pair<__sFILE *, std::function<void (__sFILE *)>> {
        struct __sFILE *__value_;
        struct function<void (__sFILE *)> __value_;
    } __ptr_;
};

struct unique_ptr<audiobase::dsp::PitchDetect, std::default_delete<audiobase::dsp::PitchDetect>> {
    struct __compressed_pair<audiobase::dsp::PitchDetect *, std::default_delete<audiobase::dsp::PitchDetect>> {
        struct PitchDetect *__value_;
    } __ptr_;
};

struct unique_ptr<audiobase::remix::AccompanyTrackImpl, std::default_delete<audiobase::remix::AccompanyTrackImpl>> {
    struct __compressed_pair<audiobase::remix::AccompanyTrackImpl *, std::default_delete<audiobase::remix::AccompanyTrackImpl>> {
        struct AccompanyTrackImpl *__value_;
    } __ptr_;
};

struct unique_ptr<flutter::ConnectionCollection, std::default_delete<flutter::ConnectionCollection>> {
    struct __compressed_pair<flutter::ConnectionCollection *, std::default_delete<flutter::ConnectionCollection>> {
        struct ConnectionCollection *__value_;
    } __ptr_;
};

struct unique_ptr<flutter::IsolateConfiguration, std::default_delete<flutter::IsolateConfiguration>> {
    struct __compressed_pair<flutter::IsolateConfiguration *, std::default_delete<flutter::IsolateConfiguration>> {
        struct IsolateConfiguration *_field1;
    } _field1;
};

struct unique_ptr<flutter::PointerDataPacket, std::default_delete<flutter::PointerDataPacket>> {
    struct __compressed_pair<flutter::PointerDataPacket *, std::default_delete<flutter::PointerDataPacket>> {
        struct PointerDataPacket *_field1;
    } _field1;
};

struct unique_ptr<flutter::Shell, std::default_delete<flutter::Shell>> {
    struct __compressed_pair<flutter::Shell *, std::default_delete<flutter::Shell>> {
        struct Shell *__value_;
    } __ptr_;
};

struct unique_ptr<fml::Thread, std::default_delete<fml::Thread>> {
    struct __compressed_pair<fml::Thread *, std::default_delete<fml::Thread>> {
        struct Thread *_field1;
    } _field1;
};

struct unique_ptr<fml::WeakNSObjectFactory<FlutterEngine>, std::default_delete<fml::WeakNSObjectFactory<FlutterEngine>>> {
    struct __compressed_pair<fml::WeakNSObjectFactory<FlutterEngine>*, std::default_delete<fml::WeakNSObjectFactory<FlutterEngine>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<fml::WeakNSObjectFactory<FlutterKeyboardManager>, std::default_delete<fml::WeakNSObjectFactory<FlutterKeyboardManager>>> {
    struct __compressed_pair<fml::WeakNSObjectFactory<FlutterKeyboardManager>*, std::default_delete<fml::WeakNSObjectFactory<FlutterKeyboardManager>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<fml::WeakNSObjectFactory<FlutterViewController>, std::default_delete<fml::WeakNSObjectFactory<FlutterViewController>>> {
    struct __compressed_pair<fml::WeakNSObjectFactory<FlutterViewController>*, std::default_delete<fml::WeakNSObjectFactory<FlutterViewController>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<lite_base::Thread, std::default_delete<lite_base::Thread>> {
    struct __compressed_pair<lite_base::Thread *, std::default_delete<lite_base::Thread>> {
        struct Thread *__value_;
    } __ptr_;
};

struct unique_ptr<liteav::CustomDecodeCallback, std::default_delete<liteav::CustomDecodeCallback>> {
    struct __compressed_pair<liteav::CustomDecodeCallback *, std::default_delete<liteav::CustomDecodeCallback>> {
        struct CustomDecodeCallback *__value_;
    } __ptr_;
};

struct unique_ptr<liteav::Event4XReporter, std::default_delete<liteav::Event4XReporter>> {
    struct __compressed_pair<liteav::Event4XReporter *, std::default_delete<liteav::Event4XReporter>> {
        struct Event4XReporter *__value_;
    } __ptr_;
};

struct unique_ptr<liteav::HttpClient::Request, std::default_delete<liteav::HttpClient::Request>> {
    struct __compressed_pair<liteav::HttpClient::Request *, std::default_delete<liteav::HttpClient::Request>> {
        struct Request *_field1;
    } _field1;
};

struct unique_ptr<liteav::audio::AudioFrame, std::default_delete<liteav::audio::AudioFrame>> {
    struct __compressed_pair<liteav::audio::AudioFrame *, std::default_delete<liteav::audio::AudioFrame>> {
        struct AudioFrame *__value_;
    } __ptr_;
};

struct unique_ptr<liteav::audio::SilkResamplerWrapper, std::default_delete<liteav::audio::SilkResamplerWrapper>> {
    struct __compressed_pair<liteav::audio::SilkResamplerWrapper *, std::default_delete<liteav::audio::SilkResamplerWrapper>> {
        struct SilkResamplerWrapper *__value_;
    } __ptr_;
};

struct unique_ptr<liteav::live::TXLogCallbackWrapper, std::default_delete<liteav::live::TXLogCallbackWrapper>> {
    struct __compressed_pair<liteav::live::TXLogCallbackWrapper *, std::default_delete<liteav::live::TXLogCallbackWrapper>> {
        struct TXLogCallbackWrapper *__value_;
    } __ptr_;
};

struct unique_ptr<liteav::live::TXNtpServiceCallbackImpl, std::default_delete<liteav::live::TXNtpServiceCallbackImpl>> {
    struct __compressed_pair<liteav::live::TXNtpServiceCallbackImpl *, std::default_delete<liteav::live::TXNtpServiceCallbackImpl>> {
        struct TXNtpServiceCallbackImpl *__value_;
    } __ptr_;
};

struct unique_ptr<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>>> {
    struct __compressed_pair<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>*, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>>> {
        void *_field1;
    } _field1;
};

struct unique_ptr<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>>> {
    struct __compressed_pair<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>*, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>>> {
        void *_field1;
    } _field1;
};

struct unique_ptr<liteav::video::VideoFrame, std::default_delete<liteav::video::VideoFrame>> {
    struct __compressed_pair<liteav::video::VideoFrame *, std::default_delete<liteav::video::VideoFrame>> {
        struct VideoFrame *__value_;
    } __ptr_;
};

struct unique_ptr<mm::JSHolder<OpaqueJSValue *>, std::default_delete<mm::JSHolder<OpaqueJSValue *>>> {
    struct __compressed_pair<mm::JSHolder<OpaqueJSValue *>*, std::default_delete<mm::JSHolder<OpaqueJSValue *>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<ocrlite::OcrApi, std::default_delete<ocrlite::OcrApi>> {
    struct __compressed_pair<ocrlite::OcrApi *, std::default_delete<ocrlite::OcrApi>> {
        struct OcrApi *__value_;
    } __ptr_;
};

struct unique_ptr<rfx::ClarityFilter, std::default_delete<rfx::ClarityFilter>> {
    struct __compressed_pair<rfx::ClarityFilter *, std::default_delete<rfx::ClarityFilter>> {
        struct ClarityFilter *__value_;
    } __ptr_;
};

struct unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> {
    struct __compressed_pair<rfx::RfxImageCropFilter *, std::default_delete<rfx::RfxImageCropFilter>> {
        struct RfxImageCropFilter *__value_;
    } __ptr_;
};

struct unique_ptr<rfx::RfxImageView, std::default_delete<rfx::RfxImageView>> {
    struct __compressed_pair<rfx::RfxImageView *, std::default_delete<rfx::RfxImageView>> {
        struct RfxImageView *__value_;
    } __ptr_;
};

struct unique_ptr<rfx::RfxRenderGraph, std::default_delete<rfx::RfxRenderGraph>> {
    struct __compressed_pair<rfx::RfxRenderGraph *, std::default_delete<rfx::RfxRenderGraph>> {
        struct RfxRenderGraph *__value_;
    } __ptr_;
};

struct unique_ptr<rfx::SharpenFilter, std::default_delete<rfx::SharpenFilter>> {
    struct __compressed_pair<rfx::SharpenFilter *, std::default_delete<rfx::SharpenFilter>> {
        struct SharpenFilter *__value_;
    } __ptr_;
};

struct unique_ptr<rfx::XDenoising, std::default_delete<rfx::XDenoising>> {
    struct __compressed_pair<rfx::XDenoising *, std::default_delete<rfx::XDenoising>> {
        struct XDenoising *__value_;
    } __ptr_;
};

struct unique_ptr<rfx::XLiveCompose, std::default_delete<rfx::XLiveCompose>> {
    struct __compressed_pair<rfx::XLiveCompose *, std::default_delete<rfx::XLiveCompose>> {
        struct XLiveCompose *__value_;
    } __ptr_;
};

struct unique_ptr<rfx::XMMGPUSpatiotemporalDenosing, std::default_delete<rfx::XMMGPUSpatiotemporalDenosing>> {
    struct __compressed_pair<rfx::XMMGPUSpatiotemporalDenosing *, std::default_delete<rfx::XMMGPUSpatiotemporalDenosing>> {
        struct XMMGPUSpatiotemporalDenosing *__value_;
    } __ptr_;
};

struct unique_ptr<rfx::XRgba2UVFilter, std::default_delete<rfx::XRgba2UVFilter>> {
    struct __compressed_pair<rfx::XRgba2UVFilter *, std::default_delete<rfx::XRgba2UVFilter>> {
        struct XRgba2UVFilter *__value_;
    } __ptr_;
};

struct unique_ptr<rfx::XRgba2YFilter, std::default_delete<rfx::XRgba2YFilter>> {
    struct __compressed_pair<rfx::XRgba2YFilter *, std::default_delete<rfx::XRgba2YFilter>> {
        struct XRgba2YFilter *__value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<mars::cdn::EMediaFormat, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<mars::cdn::EMediaFormat, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<mars::cdn::EMediaFormat, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<mars::cdn::EMediaFormat, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<mars::cdn::EMediaFormat, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<mars::cdn::EMediaFormat, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, NSMutableArray *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, NSMutableArray *>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, NSMutableArray *>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, NSMutableArray *>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, NSMutableArray *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, NSMutableArray *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, double>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, double>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, double>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, double>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, double>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, double>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, flutter::ViewportMetrics>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, flutter::ViewportMetrics>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, flutter::ViewportMetrics>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, flutter::ViewportMetrics>, void *>*>*>>> {
        void **_field1;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, flutter::ViewportMetrics>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, flutter::ViewportMetrics>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<tsk::score::Scorer::Impl, std::default_delete<tsk::score::Scorer::Impl>> {
    struct __compressed_pair<tsk::score::Scorer::Impl *, std::default_delete<tsk::score::Scorer::Impl>> {
        struct Impl *__value_;
    } __ptr_;
};

struct unique_ptr<wevision::XChatCls::Impl, std::default_delete<wevision::XChatCls::Impl>> {
    struct __compressed_pair<wevision::XChatCls::Impl *, std::default_delete<wevision::XChatCls::Impl>> {
        struct Impl *__value_;
    } __ptr_;
};

struct unique_ptr<wevision::XFaceCluster::Impl, std::default_delete<wevision::XFaceCluster::Impl>> {
    struct __compressed_pair<wevision::XFaceCluster::Impl *, std::default_delete<wevision::XFaceCluster::Impl>> {
        struct Impl *__value_;
    } __ptr_;
};

struct unique_ptr<wxvoipsdk::AudioFrame, std::default_delete<wxvoipsdk::AudioFrame>> {
    struct __compressed_pair<wxvoipsdk::AudioFrame *, std::default_delete<wxvoipsdk::AudioFrame>> {
        struct AudioFrame *__value_;
    } __ptr_;
};

struct unique_ptr<wxvoipsdk::audio::AudioFrameRingBuffer, std::default_delete<wxvoipsdk::audio::AudioFrameRingBuffer>> {
    struct __compressed_pair<wxvoipsdk::audio::AudioFrameRingBuffer *, std::default_delete<wxvoipsdk::audio::AudioFrameRingBuffer>> {
        struct AudioFrameRingBuffer *__value_;
    } __ptr_;
};

struct unique_ptr<wxvoipsdk::audio::HardwareCallbackImpl, std::default_delete<wxvoipsdk::audio::HardwareCallbackImpl>> {
    struct __compressed_pair<wxvoipsdk::audio::HardwareCallbackImpl *, std::default_delete<wxvoipsdk::audio::HardwareCallbackImpl>> {
        struct HardwareCallbackImpl *__value_;
    } __ptr_;
};

struct unique_ptr<wxvoipsdk::audio::HardwareManager, std::default_delete<wxvoipsdk::audio::HardwareManager>> {
    struct __compressed_pair<wxvoipsdk::audio::HardwareManager *, std::default_delete<wxvoipsdk::audio::HardwareManager>> {
        struct HardwareManager *__value_;
    } __ptr_;
};

struct unique_ptr<wxvoipsdk::audio::SilkResampler, std::default_delete<wxvoipsdk::audio::SilkResampler>> {
    struct __compressed_pair<wxvoipsdk::audio::SilkResampler *, std::default_delete<wxvoipsdk::audio::SilkResampler>> {
        struct SilkResampler *__value_;
    } __ptr_;
};

struct unordered_map<NSString *, id, KeyHasher, KeyEqualer, std::allocator<std::pair<NSString *const, id>>> {
    struct __hash_table<std::__hash_value_type<NSString *, id>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, id>, KeyHasher, KeyEqualer>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, id>, KeyEqualer, KeyHasher>, std::allocator<std::__hash_value_type<NSString *, id>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, id>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, id>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, id>, KeyHasher, KeyEqualer>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, id>, KeyEqualer, KeyHasher>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<SEL *, NSMethodSignature *, std::hash<SEL *>, std::equal_to<SEL *>, std::allocator<std::pair<SEL *const, NSMethodSignature *>>> {
    struct __hash_table<std::__hash_value_type<SEL *, NSMethodSignature *>, std::__unordered_map_hasher<SEL *, std::__hash_value_type<SEL *, NSMethodSignature *>, std::hash<SEL *>, std::equal_to<SEL *>>, std::__unordered_map_equal<SEL *, std::__hash_value_type<SEL *, NSMethodSignature *>, std::equal_to<SEL *>, std::hash<SEL *>>, std::allocator<std::__hash_value_type<SEL *, NSMethodSignature *>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<SEL *, NSMethodSignature *>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<SEL *, std::__hash_value_type<SEL *, NSMethodSignature *>, std::hash<SEL *>, std::equal_to<SEL *>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<SEL *, std::__hash_value_type<SEL *, NSMethodSignature *>, std::equal_to<SEL *>, std::hash<SEL *>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<SnsUserBehaviourInfoPageType, unsigned int, std::hash<SnsUserBehaviourInfoPageType>, std::equal_to<SnsUserBehaviourInfoPageType>, std::allocator<std::pair<const SnsUserBehaviourInfoPageType, unsigned int>>> {
    struct __hash_table<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::__unordered_map_hasher<SnsUserBehaviourInfoPageType, std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::hash<SnsUserBehaviourInfoPageType>, std::equal_to<SnsUserBehaviourInfoPageType>>, std::__unordered_map_equal<SnsUserBehaviourInfoPageType, std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::equal_to<SnsUserBehaviourInfoPageType>, std::hash<SnsUserBehaviourInfoPageType>>, std::allocator<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<SnsUserBehaviourInfoPageType, std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::hash<SnsUserBehaviourInfoPageType>, std::equal_to<SnsUserBehaviourInfoPageType>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<SnsUserBehaviourInfoPageType, std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::equal_to<SnsUserBehaviourInfoPageType>, std::hash<SnsUserBehaviourInfoPageType>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<WCAppLaunchTimeEvent, unsigned long long, std::hash<WCAppLaunchTimeEvent>, std::equal_to<WCAppLaunchTimeEvent>, std::allocator<std::pair<const WCAppLaunchTimeEvent, unsigned long long>>> {
    struct __hash_table<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, std::__unordered_map_hasher<WCAppLaunchTimeEvent, std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, std::hash<WCAppLaunchTimeEvent>, std::equal_to<WCAppLaunchTimeEvent>>, std::__unordered_map_equal<WCAppLaunchTimeEvent, std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, std::equal_to<WCAppLaunchTimeEvent>, std::hash<WCAppLaunchTimeEvent>>, std::allocator<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<WCAppLaunchTimeEvent, std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, std::hash<WCAppLaunchTimeEvent>, std::equal_to<WCAppLaunchTimeEvent>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<WCAppLaunchTimeEvent, std::__hash_value_type<WCAppLaunchTimeEvent, unsigned long long>, std::equal_to<WCAppLaunchTimeEvent>, std::hash<WCAppLaunchTimeEvent>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> {
    struct __hash_table<std::__hash_value_type<double, NSMutableArray *>, std::__unordered_map_hasher<double, std::__hash_value_type<double, NSMutableArray *>, std::hash<double>, std::equal_to<double>>, std::__unordered_map_equal<double, std::__hash_value_type<double, NSMutableArray *>, std::equal_to<double>, std::hash<double>>, std::allocator<std::__hash_value_type<double, NSMutableArray *>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, NSMutableArray *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, NSMutableArray *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, NSMutableArray *>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<double, NSMutableArray *>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<double, NSMutableArray *>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<double, std::__hash_value_type<double, NSMutableArray *>, std::hash<double>, std::equal_to<double>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<double, std::__hash_value_type<double, NSMutableArray *>, std::equal_to<double>, std::hash<double>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> {
    struct __hash_table<std::__hash_value_type<double, double>, std::__unordered_map_hasher<double, std::__hash_value_type<double, double>, std::hash<double>, std::equal_to<double>>, std::__unordered_map_equal<double, std::__hash_value_type<double, double>, std::equal_to<double>, std::hash<double>>, std::allocator<std::__hash_value_type<double, double>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, double>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, double>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<double, double>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<double, double>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<double, double>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<double, std::__hash_value_type<double, double>, std::hash<double>, std::equal_to<double>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<double, std::__hash_value_type<double, double>, std::equal_to<double>, std::hash<double>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<int, _NativeBuffer, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, _NativeBuffer>>> {
    struct __hash_table<std::__hash_value_type<int, _NativeBuffer>, std::__unordered_map_hasher<int, std::__hash_value_type<int, _NativeBuffer>, std::hash<int>, std::equal_to<int>>, std::__unordered_map_equal<int, std::__hash_value_type<int, _NativeBuffer>, std::equal_to<int>, std::hash<int>>, std::allocator<std::__hash_value_type<int, _NativeBuffer>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, _NativeBuffer>, std::hash<int>, std::equal_to<int>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, _NativeBuffer>, std::equal_to<int>, std::hash<int>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<long long, flutter::ViewportMetrics, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, flutter::ViewportMetrics>>> {
    struct __hash_table<std::__hash_value_type<long long, flutter::ViewportMetrics>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, flutter::ViewportMetrics>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, flutter::ViewportMetrics>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, flutter::ViewportMetrics>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, flutter::ViewportMetrics>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, flutter::ViewportMetrics>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, flutter::ViewportMetrics>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<long long, flutter::ViewportMetrics>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, flutter::ViewportMetrics>, void *>*> {
                void *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, flutter::ViewportMetrics>, std::hash<long long>, std::equal_to<long long>>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, flutter::ViewportMetrics>, std::equal_to<long long>, std::hash<long long>>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> {
    struct __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::string>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<std::string, unsigned long, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> {
    struct __hash_table<std::__hash_value_type<std::string, unsigned long>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, unsigned long>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> {
    struct __hash_table<std::__hash_value_type<unsigned int, unsigned int>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, unsigned int>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, EJFontGlyphInfo, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, EJFontGlyphInfo>>> {
    struct __hash_table<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_set<mars::cdn::EMediaFormat, std::hash<mars::cdn::EMediaFormat>, std::equal_to<mars::cdn::EMediaFormat>, std::allocator<mars::cdn::EMediaFormat>> {
    struct __hash_table<mars::cdn::EMediaFormat, std::hash<mars::cdn::EMediaFormat>, std::equal_to<mars::cdn::EMediaFormat>, std::allocator<mars::cdn::EMediaFormat>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<mars::cdn::EMediaFormat, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<mars::cdn::EMediaFormat, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<mars::cdn::EMediaFormat, void *>*>, std::allocator<std::__hash_node<mars::cdn::EMediaFormat, void *>>> {
            struct __hash_node_base<std::__hash_node<mars::cdn::EMediaFormat, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::hash<mars::cdn::EMediaFormat>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::equal_to<mars::cdn::EMediaFormat>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> {
    struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *>*>, std::allocator<std::__hash_node<std::string, void *>>> {
            struct __hash_node_base<std::__hash_node<std::string, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::hash<std::string>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::equal_to<std::string>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct uregex;

struct uuid {
    unsigned char data[16];
};

struct vImage_ARGBToYpCbCr {
    unsigned char opaque[128];
};

struct vImage_Buffer {
    void *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct vec2 {
    double _field1;
    double _field2;
};

struct vec<3, float, glm::packed_highp> {
    CDUnion_04d6de92 _field1;
    CDUnion_04d6de92 _field2;
    CDUnion_04d6de92 _field3;
};

struct vector<CronetTaskProfile::HeaderMap, std::allocator<CronetTaskProfile::HeaderMap>> {
    struct HeaderMap *__begin_;
    struct HeaderMap *__end_;
    struct __compressed_pair<CronetTaskProfile::HeaderMap *, std::allocator<CronetTaskProfile::HeaderMap>> {
        struct HeaderMap *__value_;
    } __end_cap_;
};

struct vector<CronetTaskProfile::HostIpMap, std::allocator<CronetTaskProfile::HostIpMap>> {
    struct HostIpMap *__begin_;
    struct HostIpMap *__end_;
    struct __compressed_pair<CronetTaskProfile::HostIpMap *, std::allocator<CronetTaskProfile::HostIpMap>> {
        struct HostIpMap *__value_;
    } __end_cap_;
};

struct vector<CronetTaskProfile::QuicForceHost, std::allocator<CronetTaskProfile::QuicForceHost>> {
    struct QuicForceHost *__begin_;
    struct QuicForceHost *__end_;
    struct __compressed_pair<CronetTaskProfile::QuicForceHost *, std::allocator<CronetTaskProfile::QuicForceHost>> {
        struct QuicForceHost *__value_;
    } __end_cap_;
};

struct vector<CronetTaskProfile::QuicHostMap, std::allocator<CronetTaskProfile::QuicHostMap>> {
    struct QuicHostMap *__begin_;
    struct QuicHostMap *__end_;
    struct __compressed_pair<CronetTaskProfile::QuicHostMap *, std::allocator<CronetTaskProfile::QuicHostMap>> {
        struct QuicHostMap *__value_;
    } __end_cap_;
};

struct vector<EJVector2, std::allocator<EJVector2>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<EJVector2 *, std::allocator<EJVector2>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<FFE::BoxInfo, std::allocator<FFE::BoxInfo>> {
    struct BoxInfo *__begin_;
    struct BoxInfo *__end_;
    struct __compressed_pair<FFE::BoxInfo *, std::allocator<FFE::BoxInfo>> {
        struct BoxInfo *__value_;
    } __end_cap_;
};

struct vector<FFE::HeadInfo, std::allocator<FFE::HeadInfo>> {
    struct HeadInfo *_field1;
    struct HeadInfo *_field2;
    struct __compressed_pair<FFE::HeadInfo *, std::allocator<FFE::HeadInfo>> {
        struct HeadInfo *_field1;
    } _field3;
};

struct vector<FileInfo, std::allocator<FileInfo>> {
    struct FileInfo *_field1;
    struct FileInfo *_field2;
    struct __compressed_pair<FileInfo *, std::allocator<FileInfo>> {
        struct FileInfo *_field1;
    } _field3;
};

struct vector<MJTileReusableAttributes *, std::allocator<MJTileReusableAttributes *>> {
    id *_field1;
    id *_field2;
    struct __compressed_pair<MJTileReusableAttributes *__strong *, std::allocator<MJTileReusableAttributes *>> {
        id *_field1;
    } _field3;
};

struct vector<MJTimeRulerScale *, std::allocator<MJTimeRulerScale *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<MJTimeRulerScale *__strong *, std::allocator<MJTimeRulerScale *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<NSString *__unsafe_unretained, std::allocator<NSString *__unsafe_unretained>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<NSString *__unsafe_unretained *, std::allocator<NSString *__unsafe_unretained>> {
        id *__value_;
    } __end_cap_;
};

struct vector<PixelBufferPool, std::allocator<PixelBufferPool>> {
    struct PixelBufferPool *__begin_;
    struct PixelBufferPool *__end_;
    struct __compressed_pair<PixelBufferPool *, std::allocator<PixelBufferPool>> {
        struct PixelBufferPool *__value_;
    } __end_cap_;
};

struct vector<PreviewCoverItem, std::allocator<PreviewCoverItem>> {
    struct PreviewCoverItem *_field1;
    struct PreviewCoverItem *_field2;
    struct __compressed_pair<PreviewCoverItem *, std::allocator<PreviewCoverItem>> {
        struct PreviewCoverItem *_field1;
    } _field3;
};

struct vector<QBAR_INFO, std::allocator<QBAR_INFO>> {
    struct QBAR_INFO *_field1;
    struct QBAR_INFO *_field2;
    struct __compressed_pair<QBAR_INFO *, std::allocator<QBAR_INFO>> {
        struct QBAR_INFO *_field1;
    } _field3;
};

struct vector<QBAR_POINT, std::allocator<QBAR_POINT>> {
    struct QBAR_POINT *_field1;
    struct QBAR_POINT *_field2;
    struct __compressed_pair<QBAR_POINT *, std::allocator<QBAR_POINT>> {
        struct QBAR_POINT *_field1;
    } _field3;
};

struct vector<QBAR_RESULT, std::allocator<QBAR_RESULT>> {
    struct QBAR_RESULT *_field1;
    struct QBAR_RESULT *_field2;
    struct __compressed_pair<QBAR_RESULT *, std::allocator<QBAR_RESULT>> {
        struct QBAR_RESULT *_field1;
    } _field3;
};

struct vector<RawYuvData, std::allocator<RawYuvData>> {
    struct RawYuvData *__begin_;
    struct RawYuvData *__end_;
    struct __compressed_pair<RawYuvData *, std::allocator<RawYuvData>> {
        struct RawYuvData *__value_;
    } __end_cap_;
};

struct vector<SectionFrame, std::allocator<SectionFrame>> {
    struct SectionFrame *__begin_;
    struct SectionFrame *__end_;
    struct __compressed_pair<SectionFrame *, std::allocator<SectionFrame>> {
        struct SectionFrame *__value_;
    } __end_cap_;
};

struct vector<TPAVProgramInfo, std::allocator<TPAVProgramInfo>> {
    struct TPAVProgramInfo *_field1;
    struct TPAVProgramInfo *_field2;
    struct __compressed_pair<TPAVProgramInfo *, std::allocator<TPAVProgramInfo>> {
        struct TPAVProgramInfo *_field1;
    } _field3;
};

struct vector<TPMediaTrackInfo, std::allocator<TPMediaTrackInfo>> {
    struct TPMediaTrackInfo *_field1;
    struct TPMediaTrackInfo *_field2;
    struct __compressed_pair<TPMediaTrackInfo *, std::allocator<TPMediaTrackInfo>> {
        struct TPMediaTrackInfo *_field1;
    } _field3;
};

struct vector<TPPlayerRichMediaFeature, std::allocator<TPPlayerRichMediaFeature>> {
    struct TPPlayerRichMediaFeature *_field1;
    struct TPPlayerRichMediaFeature *_field2;
    struct __compressed_pair<TPPlayerRichMediaFeature *, std::allocator<TPPlayerRichMediaFeature>> {
        struct TPPlayerRichMediaFeature *_field1;
    } _field3;
};

struct vector<TPPlayerRichMediaTimeRange, std::allocator<TPPlayerRichMediaTimeRange>> {
    struct TPPlayerRichMediaTimeRange *_field1;
    struct TPPlayerRichMediaTimeRange *_field2;
    struct __compressed_pair<TPPlayerRichMediaTimeRange *, std::allocator<TPPlayerRichMediaTimeRange>> {
        struct TPPlayerRichMediaTimeRange *_field1;
    } _field3;
};

struct vector<TensorData, std::__1::allocator<TensorData>> {
    struct TensorData *_field1;
    struct TensorData *_field2;
    struct __compressed_pair<TensorData *, std::__1::allocator<TensorData>> {
        struct TensorData *_field1;
    } _field3;
};

struct vector<UPPrecisionCellModel, std::allocator<UPPrecisionCellModel>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<UPPrecisionCellModel *, std::allocator<UPPrecisionCellModel>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<WCFinderProfileCard, std::allocator<WCFinderProfileCard>> {
    struct WCFinderProfileCard *_field1;
    struct WCFinderProfileCard *_field2;
    struct __compressed_pair<WCFinderProfileCard *, std::allocator<WCFinderProfileCard>> {
        struct WCFinderProfileCard *_field1;
    } _field3;
};

struct vector<WCFinderTaskPQTask *, std::allocator<WCFinderTaskPQTask *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<WCFinderTaskPQTask *__strong *, std::allocator<WCFinderTaskPQTask *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<WeEffect::Rect, std::allocator<WeEffect::Rect>> {
    struct Rect *_field1;
    struct Rect *_field2;
    struct __compressed_pair<WeEffect::Rect *, std::allocator<WeEffect::Rect>> {
        struct Rect *_field1;
    } _field3;
};

struct vector<WeVisDataReport22049Field, std::allocator<WeVisDataReport22049Field>> {
    struct WeVisDataReport22049Field *__begin_;
    struct WeVisDataReport22049Field *__end_;
    struct __compressed_pair<WeVisDataReport22049Field *, std::allocator<WeVisDataReport22049Field>> {
        struct WeVisDataReport22049Field *__value_;
    } __end_cap_;
};

struct vector<YTRawImgData, std::allocator<YTRawImgData>> {
    struct YTRawImgData *__begin_;
    struct YTRawImgData *__end_;
    struct __compressed_pair<YTRawImgData *, std::allocator<YTRawImgData>> {
        struct YTRawImgData *__value_;
    } __end_cap_;
};

struct vector<audiobase::fx::EffectChain, std::allocator<audiobase::fx::EffectChain>> {
    struct EffectChain *__begin_;
    struct EffectChain *__end_;
    struct __compressed_pair<audiobase::fx::EffectChain *, std::allocator<audiobase::fx::EffectChain>> {
        struct EffectChain *__value_;
    } __end_cap_;
};

struct vector<audiobase::fx::EffectChainConfig, std::allocator<audiobase::fx::EffectChainConfig>> {
    struct EffectChainConfig *__begin_;
    struct EffectChainConfig *__end_;
    struct __compressed_pair<audiobase::fx::EffectChainConfig *, std::allocator<audiobase::fx::EffectChainConfig>> {
        struct EffectChainConfig *__value_;
    } __end_cap_;
};

struct vector<audiobase::fx::EffectScaleStageConfig, std::allocator<audiobase::fx::EffectScaleStageConfig>> {
    struct EffectScaleStageConfig *__begin_;
    struct EffectScaleStageConfig *__end_;
    struct __compressed_pair<audiobase::fx::EffectScaleStageConfig *, std::allocator<audiobase::fx::EffectScaleStageConfig>> {
        struct EffectScaleStageConfig *__value_;
    } __end_cap_;
};

struct vector<audiobase::fx::EffectSliderConfig, std::allocator<audiobase::fx::EffectSliderConfig>> {
    struct EffectSliderConfig *__begin_;
    struct EffectSliderConfig *__end_;
    struct __compressed_pair<audiobase::fx::EffectSliderConfig *, std::allocator<audiobase::fx::EffectSliderConfig>> {
        struct EffectSliderConfig *__value_;
    } __end_cap_;
};

struct vector<bool, std::allocator<bool>> {
    unsigned long long *__begin_;
    unsigned long long __size_;
    struct __compressed_pair<unsigned long, std::allocator<unsigned long>> {
        unsigned long long __value_;
    } __cap_alloc_;
};

struct vector<cacheElement, std::allocator<cacheElement>> {
    struct cacheElement *__begin_;
    struct cacheElement *__end_;
    struct __compressed_pair<cacheElement *, std::allocator<cacheElement>> {
        struct cacheElement *__value_;
    } __end_cap_;
};

struct vector<double, std::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::allocator<double>> {
        double *__value_;
    } __end_cap_;
};

struct vector<float, std::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

struct vector<flutter::DisplayData, std::allocator<flutter::DisplayData>> {
    struct DisplayData *_field1;
    struct DisplayData *_field2;
    struct __compressed_pair<flutter::DisplayData *, std::allocator<flutter::DisplayData>> {
        struct DisplayData *_field1;
    } _field3;
};

struct vector<fml::CFRef<const CGPath *>, std::allocator<fml::CFRef<const CGPath *>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<fml::CFRef<const CGPath *>*, std::allocator<fml::CFRef<const CGPath *>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<fml::ScopedTypeRef<void (^)(NSData *), fml::internal::ScopedBlockTraits<void (^)(NSData *)>>, std::allocator<fml::ScopedTypeRef<void (^)(NSData *), fml::internal::ScopedBlockTraits<void (^)(NSData *)>>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<fml::ScopedTypeRef<void (^)(NSData *), fml::internal::ScopedBlockTraits<void (^)(NSData *)>>*, std::allocator<fml::ScopedTypeRef<void (^)(NSData *), fml::internal::ScopedBlockTraits<void (^)(NSData *)>>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<int, std::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::allocator<int>> {
        int *__value_;
    } __end_cap_;
};

struct vector<liteav::live::LiveMixStream, std::allocator<liteav::live::LiveMixStream>> {
    struct LiveMixStream *_field1;
    struct LiveMixStream *_field2;
    struct __compressed_pair<liteav::live::LiveMixStream *, std::allocator<liteav::live::LiveMixStream>> {
        struct LiveMixStream *_field1;
    } _field3;
};

struct vector<long long, std::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::allocator<long long>> {
        long long *__value_;
    } __end_cap_;
};

struct vector<long, std::allocator<long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long *, std::allocator<long>> {
        long long *__value_;
    } __end_cap_;
};

struct vector<mars::cdn::ApplyFileidRequestItem, std::allocator<mars::cdn::ApplyFileidRequestItem>> {
    struct ApplyFileidRequestItem *__begin_;
    struct ApplyFileidRequestItem *__end_;
    struct __compressed_pair<mars::cdn::ApplyFileidRequestItem *, std::allocator<mars::cdn::ApplyFileidRequestItem>> {
        struct ApplyFileidRequestItem *__value_;
    } __end_cap_;
};

struct vector<mars::cdn::BatchSnsReqImageData, std::allocator<mars::cdn::BatchSnsReqImageData>> {
    struct BatchSnsReqImageData *__begin_;
    struct BatchSnsReqImageData *__end_;
    struct __compressed_pair<mars::cdn::BatchSnsReqImageData *, std::allocator<mars::cdn::BatchSnsReqImageData>> {
        struct BatchSnsReqImageData *__value_;
    } __end_cap_;
};

struct vector<mars::cdn::CheckHitRequestItem, std::allocator<mars::cdn::CheckHitRequestItem>> {
    struct CheckHitRequestItem *__begin_;
    struct CheckHitRequestItem *__end_;
    struct __compressed_pair<mars::cdn::CheckHitRequestItem *, std::allocator<mars::cdn::CheckHitRequestItem>> {
        struct CheckHitRequestItem *__value_;
    } __end_cap_;
};

struct vector<mars::cdn::FileID, std::allocator<mars::cdn::FileID>> {
    struct FileID *__begin_;
    struct FileID *__end_;
    struct __compressed_pair<mars::cdn::FileID *, std::allocator<mars::cdn::FileID>> {
        struct FileID *__value_;
    } __end_cap_;
};

struct vector<mars::smc::STIDKeyInfo, std::allocator<mars::smc::STIDKeyInfo>> {
    struct STIDKeyInfo *__begin_;
    struct STIDKeyInfo *__end_;
    struct __compressed_pair<mars::smc::STIDKeyInfo *, std::allocator<mars::smc::STIDKeyInfo>> {
        struct STIDKeyInfo *__value_;
    } __end_cap_;
};

struct vector<objc_method_description, std::allocator<objc_method_description>> {
    struct objc_method_description *_field1;
    struct objc_method_description *_field2;
    struct __compressed_pair<objc_method_description *, std::allocator<objc_method_description>> {
        struct objc_method_description *_field1;
    } _field3;
};

struct vector<ocrlite::Point2f, std::allocator<ocrlite::Point2f>> {
    struct Point2f *_field1;
    struct Point2f *_field2;
    struct __compressed_pair<ocrlite::Point2f *, std::allocator<ocrlite::Point2f>> {
        struct Point2f *_field1;
    } _field3;
};

struct vector<qmapkit::Mapsdk_trafficevent::Detail, std::allocator<qmapkit::Mapsdk_trafficevent::Detail>> {
    struct Detail *_field1;
    struct Detail *_field2;
    struct __compressed_pair<qmapkit::Mapsdk_trafficevent::Detail *, std::allocator<qmapkit::Mapsdk_trafficevent::Detail>> {
        struct Detail *_field1;
    } _field3;
};

struct vector<std::pair<FinderStreamDivider *, NSArray<WCFinderDataItem *>*>, std::allocator<std::pair<FinderStreamDivider *, NSArray<WCFinderDataItem *>*>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::pair<FinderStreamDivider *, NSArray<WCFinderDataItem *>*>*, std::allocator<std::pair<FinderStreamDivider *, NSArray<WCFinderDataItem *>*>>> {
        void *_field1;
    } _field3;
};

struct vector<std::pair<LSMFileItem *, NSData *__unsafe_unretained>, std::allocator<std::pair<LSMFileItem *, NSData *__unsafe_unretained>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::pair<LSMFileItem *, NSData *__unsafe_unretained>*, std::allocator<std::pair<LSMFileItem *, NSData *__unsafe_unretained>>> {
        void *_field1;
    } _field3;
};

struct vector<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>, std::allocator<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>*, std::allocator<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>>> {
        void *_field1;
    } _field3;
};

struct vector<std::pair<unsigned long, std::string>, std::allocator<std::pair<unsigned long, std::string>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::pair<unsigned long, std::string>*, std::allocator<std::pair<unsigned long, std::string>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::shared_ptr<ChatLogDataItem>, std::allocator<std::shared_ptr<ChatLogDataItem>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::shared_ptr<ChatLogDataItem>*, std::allocator<std::shared_ptr<ChatLogDataItem>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::shared_ptr<ChatLogSessionItem>*, std::allocator<std::shared_ptr<ChatLogSessionItem>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::shared_ptr<XMJMusicInfo>, std::allocator<std::shared_ptr<XMJMusicInfo>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::shared_ptr<XMJMusicInfo>*, std::allocator<std::shared_ptr<XMJMusicInfo>>> {
        void *_field1;
    } _field3;
};

struct vector<std::shared_ptr<audiobase::fx::ProcessorBase>, std::allocator<std::shared_ptr<audiobase::fx::ProcessorBase>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::shared_ptr<audiobase::fx::ProcessorBase>*, std::allocator<std::shared_ptr<audiobase::fx::ProcessorBase>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::shared_ptr<flutter::StringAttribute>, std::allocator<std::shared_ptr<flutter::StringAttribute>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::shared_ptr<flutter::StringAttribute>*, std::allocator<std::shared_ptr<flutter::StringAttribute>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::string, std::allocator<std::string>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::string *, std::allocator<std::string>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::tuple<CGPoint, double>, std::allocator<std::tuple<CGPoint, double>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::tuple<CGPoint, double>*, std::allocator<std::tuple<CGPoint, double>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::tuple<MJRulerMarkType, double, std::string>, std::allocator<std::tuple<MJRulerMarkType, double, std::string>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::tuple<MJRulerMarkType, double, std::string>*, std::allocator<std::tuple<MJRulerMarkType, double, std::string>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::tuple<double, std::string, std::string>, std::allocator<std::tuple<double, std::string, std::string>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::tuple<double, std::string, std::string>*, std::allocator<std::tuple<double, std::string, std::string>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::tuple<sunnyvale::core::SharedPtr<XIKImage>, XIKImageQualityInfo>, std::allocator<std::tuple<sunnyvale::core::SharedPtr<XIKImage>, XIKImageQualityInfo>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::tuple<sunnyvale::core::SharedPtr<XIKImage>, XIKImageQualityInfo>*, std::allocator<std::tuple<sunnyvale::core::SharedPtr<XIKImage>, XIKImageQualityInfo>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<subpath_t, std::allocator<subpath_t>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<subpath_t *, std::allocator<subpath_t>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<tcmapkit::ArcLineCell *, std::allocator<tcmapkit::ArcLineCell *>> {
    struct ArcLineCell **_field1;
    struct ArcLineCell **_field2;
    struct __compressed_pair<tcmapkit::ArcLineCell **, std::allocator<tcmapkit::ArcLineCell *>> {
        struct ArcLineCell **_field1;
    } _field3;
};

struct vector<tcmapkit::IAggregatable *, std::allocator<tcmapkit::IAggregatable *>> {
    struct IAggregatable **_field1;
    struct IAggregatable **_field2;
    struct __compressed_pair<tcmapkit::IAggregatable **, std::allocator<tcmapkit::IAggregatable *>> {
        struct IAggregatable **_field1;
    } _field3;
};

struct vector<tcmapkit::RGBColor, std::allocator<tcmapkit::RGBColor>> {
    struct RGBColor *_field1;
    struct RGBColor *_field2;
    struct __compressed_pair<tcmapkit::RGBColor *, std::allocator<tcmapkit::RGBColor>> {
        struct RGBColor *_field1;
    } _field3;
};

struct vector<tiny_cv::Mat, std::allocator<tiny_cv::Mat>> {
    struct Mat *__begin_;
    struct Mat *__end_;
    struct __compressed_pair<tiny_cv::Mat *, std::allocator<tiny_cv::Mat>> {
        struct Mat *__value_;
    } __end_cap_;
};

struct vector<tiny_cv::Point_<float>, std::allocator<tiny_cv::Point_<float>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<tiny_cv::Point_<float>*, std::allocator<tiny_cv::Point_<float>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<tpdrm::DrmSchemeType, std::allocator<tpdrm::DrmSchemeType>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<tpdrm::DrmSchemeType *, std::allocator<tpdrm::DrmSchemeType>> {
        int *_field1;
    } _field3;
};

struct vector<trtc::MixedUserConfig, std::allocator<trtc::MixedUserConfig>> {
    struct MixedUserConfig *_field1;
    struct MixedUserConfig *_field2;
    struct __compressed_pair<trtc::MixedUserConfig *, std::allocator<trtc::MixedUserConfig>> {
        struct MixedUserConfig *_field1;
    } _field3;
};

struct vector<unsigned char, std::allocator<unsigned char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
        char *__value_;
    } __end_cap_;
};

struct vector<unsigned long long, std::allocator<unsigned long long>> {
    unsigned long long *_field1;
    unsigned long long *_field2;
    struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> {
        unsigned long long *_field1;
    } _field3;
};

struct vector<unsigned long, std::allocator<unsigned long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

struct vector<wxvoipsdk::_AudioDeviceInfo, std::allocator<wxvoipsdk::_AudioDeviceInfo>> {
    struct _AudioDeviceInfo *_field1;
    struct _AudioDeviceInfo *_field2;
    struct __compressed_pair<wxvoipsdk::_AudioDeviceInfo *, std::allocator<wxvoipsdk::_AudioDeviceInfo>> {
        struct _AudioDeviceInfo *_field1;
    } _field3;
};

struct vector<xnet::ObjectRef<rfx::RfxTexture>, std::allocator<xnet::ObjectRef<rfx::RfxTexture>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<xnet::ObjectRef<rfx::RfxTexture>*, std::allocator<xnet::ObjectRef<rfx::RfxTexture>>> {
        void *__value_;
    } __end_cap_;
};

struct weak_ptr<CronetTaskCallback> {
    struct CronetTaskCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<affroam::RoamBackupPackageManagerDispatcher> {
    struct RoamBackupPackageManagerDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<affroam::RoamBackupperDispatcher> {
    struct RoamBackupperDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<affroam::RoamDeviceManagerDispatcher> {
    struct RoamDeviceManagerDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<affroam::RoamManagerDispatcher> {
    struct RoamManagerDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<affroam::RoamMediaFormatterDispatcher> {
    struct RoamMediaFormatterDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<affroam::RoamTaskDispatcher> {
    struct RoamTaskDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraCppConsumeSessionProphetDispatcher> {
    struct CaraCppConsumeSessionProphetDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraCppDispatcher> {
    struct CaraCppDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraCppFinderPublishProphetDispatcher> {
    struct CaraCppFinderPublishProphetDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraCppJoinLiveQualityProphetDispatcher> {
    struct CaraCppJoinLiveQualityProphetDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraCppLiveCellProphetDispatcher> {
    struct CaraCppLiveCellProphetDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraCppLiveFeatureCenterDispatcher> {
    struct CaraCppLiveFeatureCenterDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraCppLiveReddotProphetDispatcher> {
    struct CaraCppLiveReddotProphetDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraCppSessionFeatureCenterDispatcher> {
    struct CaraCppSessionFeatureCenterDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeAccountFeatureCenterDispatcher> {
    struct CaraNativeAccountFeatureCenterDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeConsumeSessionDispatcher> {
    struct CaraNativeConsumeSessionDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeContactDispatcher> {
    struct CaraNativeContactDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeContactFeatureCenterDispatcher> {
    struct CaraNativeContactFeatureCenterDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeDiscoverViewFeatureCenterDispatcher> {
    struct CaraNativeDiscoverViewFeatureCenterDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeFeatureCenterDispatcher> {
    struct CaraNativeFeatureCenterDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeFinderFeatureCenterDispatcher> {
    struct CaraNativeFinderFeatureCenterDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeFinderPublishProphetContextDispatcher> {
    struct CaraNativeFinderPublishProphetContextDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeJoinLiveQualityProphetContextDispatcher> {
    struct CaraNativeJoinLiveQualityProphetContextDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeLiveCellProphetContextDispatcher> {
    struct CaraNativeLiveCellProphetContextDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeLiveFeatureCenterDispatcher> {
    struct CaraNativeLiveFeatureCenterDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeLiveReddotProphetContextDispatcher> {
    struct CaraNativeLiveReddotProphetContextDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeProphetPredictPositiveCallbackDispatcher> {
    struct CaraNativeProphetPredictPositiveCallbackDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<cara::CaraNativeSessionFeatureCenterDispatcher> {
    struct CaraNativeSessionFeatureCenterDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<ecs::EcsManagerDispatcher> {
    struct EcsManagerDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<emoticon::EmoticonDesignerPortfolioPackDataSourceDispatcher> {
    struct EmoticonDesignerPortfolioPackDataSourceDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<emoticon::EmoticonFinderDesignerDataSourceDispatcher> {
    struct EmoticonFinderDesignerDataSourceDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<emoticon::EmoticonMetaStorageDispatcher> {
    struct EmoticonMetaStorageDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<liteav::manager::AudioEffectManager> {
    struct AudioEffectManager *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<liteav::manager::BeautyManagerProxy> {
    struct BeautyManagerProxy *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<liteav::manager::DeviceManager> {
    struct DeviceManager *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<liteav::video::VideoConsumer::Client> {
    struct Client *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<liteav::video::VideoProducer::Client> {
    struct Client *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<mars::cdn::Get3rdDnsCallback> {
    struct Get3rdDnsCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<star::AffStarDataManagerDispatcher> {
    struct AffStarDataManagerDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<star::AffStarManagerDispatcher> {
    struct AffStarManagerDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<star::AffStarOptManagerDispatcher> {
    struct AffStarOptManagerDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<star::AffStarSyncManagerDispatcher> {
    struct AffStarSyncManagerDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<unit_rc::BaseRC> {
    struct BaseRC *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<voipmp::VoIPMPIlinkSDKStatAPIDispatcher> {
    struct VoIPMPIlinkSDKStatAPIDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<voipmp::VoIPMPSystemAuthAPIDispatcher> {
    struct VoIPMPSystemAuthAPIDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<voipmp::VoIPMPSystemAuthNativeAPIDispatcher> {
    struct VoIPMPSystemAuthNativeAPIDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<voipmp::VoipmpCoreApiServiceDispatcher> {
    struct VoipmpCoreApiServiceDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<voipmp::VoipmpCoreImplServiceDispatcher> {
    struct VoipmpCoreImplServiceDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<vqm::VQMAPIDispatcher> {
    struct VQMAPIDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<vqm::VQMConfAPIDispatcher> {
    struct VQMConfAPIDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<vqm::VQMObserverDispatcher> {
    struct VQMObserverDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<wcrte::RTEAttachmentNativeItemDispatcher> {
    struct RTEAttachmentNativeItemDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<wenote::WeNoteAffDelegateDispatcher> {
    struct WeNoteAffDelegateDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<wenote::WeNoteCPPInstanceDispatcher> {
    struct WeNoteCPPInstanceDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<wenote::WeNoteFlutterInstanceDispatcher> {
    struct WeNoteFlutterInstanceDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<wenote::WenoteFlutterManagerDispatcher> {
    struct WenoteFlutterManagerDispatcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<wxvoipsdk::IWXConfAudioCallback> {
    struct IWXConfAudioCallback *_field1;
    struct __shared_weak_count *_field2;
};

struct weak_ptr<wxvoipsdk::audio::AudioDeviceCapCallback> {
    struct AudioDeviceCapCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<wxvoipsdk::audio::AudioDevicePlayCallback> {
    struct AudioDevicePlayCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<zidl::ZClientInvoker> {
    struct ZClientInvoker *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct weak_ptr<zidl::ZServerInvoker> {
    struct ZServerInvoker *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#if 0
// Names with conflicting types:
typedef struct ?<int> {
    _Atomic int _field1;
} atomic_1f1ef44a;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
} RGBColor_87c90449;

typedef struct {
    unsigned short _field1;
    unsigned short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
} EncodeParamsTypeHeader_a837b28d;

typedef struct {
    CDUnknownFunctionPointerType *_vptr$AudioFrame;
    int sample_rate;
    int channels;
    int bits;
    int frame_size_ms;
    int frame_size_byte;
    _Bool frame_size_desc_byte;
    int samples_per_channel;
    _Bool has_trae_header;
    unsigned int timestamp_ms;
    unsigned int timestamp_sample;
    unsigned short seq_number;
    int packet_type;
    int codec_format;
    int frame_type;
    int stream_format;
    unsigned short energy;
    char *buffer;
    int data_size;
    int capacity;
    _Bool is_buffer_malloc_by_self;
} AudioFrame_99e89bc4;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} RGBColor_7aedc9dc;

typedef struct ?<bool> {
    _Bool _field1;
    CDUnion_2739e4df _field2;
} Optional_046ca505;

typedef struct ?<int> {
    struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
        _Atomic int __a_value;
    } __a_;
} atomic_d5d55d14;

typedef struct {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3[3];
    void *_field4;
    unsigned long long _field5;
    struct BizMsgItemContent *_field6;
    void *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned int _field10;
    unsigned int _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    _Bool _field15;
    void *_field16;
    void *_field17;
    void *_field18;
    unsigned int _field19;
    void *_field20;
    void *_field21;
    unsigned int _field22;
    unsigned int _field23;
    void *_field24;
    unsigned long long _field25;
    int _field26;
    int _field27;
    void *_field28;
    int _field29;
    unsigned long long _field30;
    unsigned int _field31;
    void *_field32;
} BizMsgInfo_6130975d;

typedef struct {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3[3];
    void *_field4;
    unsigned long long _field5;
    struct BizMsgItemContent *_field6;
    void *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned int _field10;
    unsigned int _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    _Bool _field15;
    void *_field16;
    void *_field17;
    void *_field18;
    unsigned int _field19;
    void *_field20;
    void *_field21;
    unsigned long long _field22;
    unsigned int _field23;
    unsigned int _field24;
    void *_field25;
    unsigned long long _field26;
    int _field27;
    int _field28;
    void *_field29;
    int _field30;
    _Bool _field31;
    void *_field32;
} BizMsgInfo_f097391f;

typedef struct ?<bool> {
    struct OptionalStorage<bool, true, true> _field1;
} Optional_7a78c1a9;

typedef struct ?<std::basic_string<char>::__rep, std::allocator<char>> {
    struct __rep {
        CDUnion_fb1c1f9e ;
    } __value_;
} __compressed_pair_b5315e83;

typedef struct ?<std::basic_string<char>::__rep, std::allocator<char>> {
    struct __rep {
        CDUnion_fb1c1f9e _field1;
    } _field1;
} __compressed_pair_5d540195;

typedef struct ?<std::basic_string<char>::__rep, std::allocator<char>> {
    struct __rep {
        union {
            struct __short {
                char _field1[23];
                unsigned char _field2[0];
                unsigned int :7;
                unsigned int :1;
            } _field1;
            struct __long {
                char *_field1;
                unsigned long long _field2;
                unsigned int :63;
                unsigned int :1;
            } _field2;
            struct __raw _field3;
        } _field1;
    } _field1;
} __compressed_pair_eb88fe56;

typedef struct ?<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair_b5315e83 __r_;
} basic_string_5909a4e2;

typedef struct ?<char, std::char_traits<char>, std::allocator<char>> {
    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
        struct __rep {
            CDUnion_fb1c1f9e _field1;
        } _field1;
    } _field1;
} basic_string_1e6f3770;

typedef struct ?<char, std::char_traits<char>, std::allocator<char>> {
    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
        struct __rep {
            union {
                struct __short {
                    char _field1[23];
                    unsigned char _field2[0];
                    unsigned int :7;
                    unsigned int :1;
                } _field1;
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned int :63;
                    unsigned int :1;
                } _field2;
                struct __raw _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_831393b5;

typedef struct {
    basic_string_5909a4e2 url;
    map_c53b27e0 headers;
    _Bool enable_mete_data;
    basic_string_5909a4e2 flv_session_key;
    unsigned int connect_timeout_ms;
    unsigned int read_timeout_ms;
    unsigned int write_timeout_ms;
    struct set<std::string, std::less<std::string>, std::allocator<std::string>> target_rsp_headers_keys;
    int audio_codec_type_;
    _Bool enable_realtime;
    basic_string_5909a4e2 leb_domain;
    _Bool enable_ip_multiplexing;
} Config_224c4c0b;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    NSString *uri;
    NSString *md5Hash;
} CDStruct_9e61a806;

typedef struct {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_ba8037df;

typedef struct {
    id _field1;
    unsigned short _field2;
} CDStruct_6a59ab51;

typedef struct {
    _Bool _field1;
    unsigned char _field2;
    _Bool _field3;
    unsigned long long _field4;
} CDStruct_6a6a01a4;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned char _field16;
} CDStruct_bd2f613f;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned long long _field5;
    unsigned char _field6;
    unsigned char _field7;
} CDStruct_ac89a9bf;

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} CDStruct_6181342a;

typedef struct {
    unsigned char encStatus;
    unsigned char capStatus;
    unsigned char encType[2];
} CDStruct_6fac3b9d;

typedef struct {
    unsigned int serviceIndex;
    unsigned int fps;
    unsigned int transportType;
    unsigned int videoType;
    unsigned int pausedByMainApp;
    unsigned int orientation;
} CDStruct_5dc35ee3;

typedef struct {
    unsigned int _field1;
    unsigned short _field2;
    unsigned int _field3;
} CDStruct_91b80c38;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long x;
    unsigned long long y;
} CDStruct_73b5d383;

typedef struct {
    unsigned long long struct_size;
    CDUnknownFunctionPointerType CreateAOTData;
    CDUnknownFunctionPointerType CollectAOTData;
    CDUnknownFunctionPointerType Run;
    CDUnknownFunctionPointerType Shutdown;
    CDUnknownFunctionPointerType Initialize;
    CDUnknownFunctionPointerType Deinitialize;
    CDUnknownFunctionPointerType RunInitialized;
    CDUnknownFunctionPointerType SendWindowMetricsEvent;
    CDUnknownFunctionPointerType SendPointerEvent;
    CDUnknownFunctionPointerType SendKeyEvent;
    CDUnknownFunctionPointerType SendPlatformMessage;
    CDUnknownFunctionPointerType PlatformMessageCreateResponseHandle;
    CDUnknownFunctionPointerType PlatformMessageReleaseResponseHandle;
    CDUnknownFunctionPointerType SendPlatformMessageResponse;
    CDUnknownFunctionPointerType RegisterExternalTexture;
    CDUnknownFunctionPointerType UnregisterExternalTexture;
    CDUnknownFunctionPointerType MarkExternalTextureFrameAvailable;
    CDUnknownFunctionPointerType UpdateSemanticsEnabled;
    CDUnknownFunctionPointerType UpdateAccessibilityFeatures;
    CDUnknownFunctionPointerType DispatchSemanticsAction;
    CDUnknownFunctionPointerType OnVsync;
    CDUnknownFunctionPointerType ReloadSystemFonts;
    CDUnknownFunctionPointerType TraceEventDurationBegin;
    CDUnknownFunctionPointerType TraceEventDurationEnd;
    CDUnknownFunctionPointerType TraceEventInstant;
    CDUnknownFunctionPointerType PostRenderThreadTask;
    CDUnknownFunctionPointerType GetCurrentTime;
    CDUnknownFunctionPointerType RunTask;
    CDUnknownFunctionPointerType UpdateLocales;
    CDUnknownFunctionPointerType RunsAOTCompiledDartCode;
    CDUnknownFunctionPointerType PostDartObject;
    CDUnknownFunctionPointerType NotifyLowMemoryWarning;
    CDUnknownFunctionPointerType PostCallbackOnAllNativeThreads;
    CDUnknownFunctionPointerType NotifyDisplayUpdate;
    CDUnknownFunctionPointerType ScheduleFrame;
    CDUnknownFunctionPointerType SetNextFrameCallback;
} CDStruct_60417d04;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long _field1;
    double _field2;
    int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    char *_field6;
    _Bool _field7;
    int _field8;
} CDStruct_19ee6a98;

typedef struct {
    unsigned short bits;
    unsigned char modulus[256];
    unsigned char publicExponent[256];
    unsigned char exponent[256];
    unsigned char prime[2][128];
    unsigned char primeExponent[2][128];
    unsigned char coefficient[128];
} CDStruct_a8765c43;

typedef struct {
    unsigned short bits;
    unsigned char modulus[256];
    unsigned char exponent[256];
} CDStruct_757f3dd8;

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    char root_path[512];
    char device_id[65];
    char business_id[65];
    char user_id[65];
    int flag;
} CDStruct_088880ef;

typedef struct {
    void *_field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    _Bool _field6;
} CDStruct_3da77011;

typedef struct {
    double x1;
    double y1;
    double x2;
    double y2;
    double offset[3];
    double reds[3];
    double greens[3];
    double blues[3];
    double alphas[3];
} CDStruct_25202d3c;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
} CDStruct_1388058e;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
} CDStruct_a6fa95e6;

typedef struct {
    double minX;
    double minY;
    double maxX;
    double maxY;
} CDStruct_c519178c;

typedef struct {
    double x;
    double y;
    double r;
} CDStruct_78c249a6;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
} CDStruct_ee569e91;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
} CDStruct_0d450d55;

typedef struct {
    float x;
    float y;
} CDStruct_6e3f967a;

typedef struct {
    int localRet;
    int svrRet;
    NSData *passwdSig;
    NSArray *sigArray;
    WloginUserInfo *userInfo;
    WloginErrInfo *errInfo;
    NSData *pictureData;
} CDStruct_e485254d;

typedef struct {
    int _field1;
    int _field2;
    unsigned int *_field3;
    int *_field4;
} CDStruct_dbd3b7f8;

typedef struct {
    int r;
    int g;
    int b;
    double a;
} CDStruct_abf36e01;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
} CDStruct_66ad1804;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
} CDStruct_77932685;

typedef struct {
    int _field1;
    int _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    int _field6;
    int _field7;
} CDStruct_d5967ce6;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    int _field1;
    short _field2;
    int _field3;
    short _field4;
    short _field5;
    short _field6;
    short _field7;
    double _field8;
    double _field9;
    short _field10;
    short _field11;
    double _field12;
    double _field13;
    short _field14;
    short _field15;
    double _field16;
    double _field17;
    short _field18;
    short _field19;
    double _field20;
    double _field21;
    short _field22;
    short _field23;
    double _field24;
    double _field25;
    short _field26;
    short _field27;
    double _field28;
    double _field29;
    short _field30;
    short _field31;
    double _field32;
    double _field33;
    short _field34;
    short _field35;
    double _field36;
    double _field37;
    short _field38;
    short _field39;
    double _field40;
    double _field41;
    short _field42;
    short _field43;
    double _field44;
    double _field45;
    short _field46;
    short _field47;
} CDStruct_3cf45a09;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long _field1;
    double _field2;
} CDStruct_7f320dbc;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    long long _field2;
    _Bool _field3;
} CDStruct_b8f58034;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    double _field5;
} CDStruct_7e23819f;

typedef struct {
    long long fps;
    long long time;
    long long drawcall;
    long long vertex;
    long long triangle;
    long long jank;
    long long bigJank;
    long long stutter;
    long long jankPerSecond;
    long long bigJankPerSecond;
    long long stutterPerSecond;
} CDStruct_b6d5f750;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

typedef struct {
    long long x;
    long long y;
    short z;
    long long language;
} CDStruct_f583c974;

typedef struct {
    short _field1;
    short _field2;
    short _field3;
    short _field4;
    short _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
    short _field10;
    short _field11;
    short _field12;
    short _field13;
    short _field14;
    int _field15;
    int _field16;
    int _field17;
    int _field18;
    int _field19;
    int _field20;
    int _field21;
} CDStruct_c3594123;

typedef struct CDStruct_183601bc;

typedef struct {
    unsigned short _field1;
    unsigned short _field2;
    float _field3;
    CDStruct_183601bc *_field4;
    unsigned long long _field5;
} CDStruct_7244e0df;

typedef struct {
    WAEJTexture *texture[4];
    struct OpaqueJSValue *jsTexture[4];
} CDStruct_b80c0459;

typedef struct {
    char *_field1;
    struct OpaqueJSValue *_field2;
} CDStruct_a447ca18;

typedef struct {
    double viewScale;
    double widgetScale;
    struct CGAffineTransform transForm;
    struct CGPoint anchorPoint;
    struct CGPoint viewCenter;
    _Bool isHidden;
} CDStruct_c97747ee;

typedef struct {
    double scale;
    double rotation;
    struct CGVector translation;
} CDStruct_94e04e92;

typedef struct {
    int _field1;
    unsigned char _field2;
    unsigned char _field3;
    _Bool _field4;
    int _field5;
    char *_field6;
    union {
        void *_field1;
        char *_field2;
        Class _field3;
        CDUnknownFunctionPointerType _field4;
    } _field7;
} CDStruct_c15bdbc8;

typedef struct {
    long long options;
    struct CGSize size;
    long long mediaType;
    long long cacheType;
} CDStruct_4b68193d;

typedef struct {
    CDStruct_bd2f613f _field1;
    CDStruct_bd2f613f _field2;
} CDStruct_2c0d991e;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

typedef struct {
    CDStruct_34734122 origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

typedef struct {
    CDStruct_1b6d18a9 _field1;
    CDStruct_1b6d18a9 _field2;
    CDStruct_1b6d18a9 _field3;
} CDStruct_d2aef016;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

typedef struct {
    struct CGSize scale;
    double rotation;
} CDStruct_76c2da79;

typedef struct {
    struct CLLocationCoordinate2D center;
    struct {
        double latitudeDelta;
        double longitudeDelta;
    } span;
} CDStruct_b7cb895d;

typedef struct {
    struct CLLocationCoordinate2D northEast;
    struct CLLocationCoordinate2D southWest;
} CDStruct_3ec1b870;

typedef struct {
    struct CGAffineTransform transform;
    int globalCompositeOperation;
    CDUnion_a0760c36 fillColor;
    NSObject *fillObject;
    CDUnion_a0760c36 strokeColor;
    NSObject *strokeObject;
    float globalAlpha;
    float lineWidth;
    int lineCap;
    int lineJoin;
    float miterLimit;
    int textAlign;
    int textBaseline;
    WAEJFontDescriptor *font;
    WAEJPath *clipPath;
} CDStruct_917c3236;

typedef struct {
    struct CGRect _field1;
    double _field2;
    double _field3;
} CDStruct_91e28287;

typedef struct {
    struct MMTextLayoutParam param;
    unsigned long long fastCount;
    unsigned long long sysCount;
    long long duration;
    int type;
} CDStruct_e4889e99;

typedef struct {
    struct TC_FaceShape faceShape;
    vector_8ca568ff facePointsVis;
    float cls;
} CDStruct_0edc81f6;

typedef struct {
    int _field1;
    int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
            struct __rep {
                CDUnion_fb1c1f9e _field1;
            } _field1;
        } _field1;
    } _field5;
    float _field6;
    float _field7;
    unsigned int _field8;
    unsigned int _field9;
    float _field10;
    unsigned int _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
} CDStruct_92d0be38;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double x;
    double y;
} CDStruct_34734122;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
} CDStruct_869f9c67;

typedef struct {
    float width;
    float ascent;
    float descent;
} CDStruct_de2edefb;

typedef struct CFRef<__CVMetalTextureCache *> {
    struct __CVMetalTextureCache *instance_;
} CFRef_d5dd836c;

typedef struct CFRef<const CGPath *> {
    struct CGPath *_field1;
} CFRef_9a097741;

typedef struct ObjectRef<rfx::RfxTexture> {
    struct RfxTexture *mpObject;
} ObjectRef_32b092d4;

typedef struct ObjectRef<xnet::rci::RciSwapChain> {
    struct RciSwapChain *mpObject;
} ObjectRef_edd3069f;

typedef struct OnceCallback<void (liteav::HttpClient::State, const liteav::HttpClient::Request &, std::unique_ptr<liteav::HttpClient::Response>)> {
    struct scoped_refptr<lite_base::internal::BindStateBase> _field1;
} OnceCallback_88fa0ee2;

typedef struct Optional<int> {
    struct OptionalStorage<int, true, true> storage_;
} Optional_509529bd;

typedef struct Optional<liteav::audio::AudioFrame> {
    struct OptionalStorage<liteav::audio::AudioFrame, false, false> _field1;
} Optional_3f6628e3;

typedef struct Optional<liteav::audio::AudioPacket> {
    struct OptionalStorage<liteav::audio::AudioPacket, false, false> _field1;
} Optional_eb6751fe;

typedef struct RefPtr<fml::TaskRunner> {
    struct TaskRunner *_field1;
} RefPtr_c4449933;

typedef struct RefPtr<fml::WeakContainer> {
    struct WeakContainer *ptr_;
} RefPtr_fcf19635;

typedef struct RepeatingCallback<void (liteav::HttpClient::State, const liteav::HttpClient::Request &, std::unique_ptr<liteav::HttpClient::Response>)> {
    struct scoped_refptr<lite_base::internal::BindStateBase> _field1;
} RepeatingCallback_b3d05fce;

typedef struct SharedPtr<XAKAsset> {
    struct XAKAsset *_field1;
} SharedPtr_3892eb03;

typedef struct SharedPtr<XCSMediaFileInputSettings> {
    struct XCSMediaFileInputSettings *_field1;
} SharedPtr_ec06edb7;

typedef struct SharedPtr<XIKImage> {
    struct XIKImage *_ptr;
} SharedPtr_db4ce4f7;

typedef struct SharedPtr<XLinearValueMapper<XTMTime, double>> {
    void *_ptr;
} SharedPtr_141d0c2d;

typedef struct SharedPtr<XLinearValueMapper<double, XTMTime>> {
    void *_ptr;
} SharedPtr_1b64590e;

typedef struct SharedPtr<XMFAudioAutoVolumeCalculator> {
    struct XMFAudioAutoVolumeCalculator *_ptr;
} SharedPtr_006c5f19;

typedef struct SharedPtr<XMFAudioTrack> {
    struct XMFAudioTrack *_ptr;
} SharedPtr_dc2152c3;

typedef struct SharedPtr<XMFClip> {
    struct XMFClip *_field1;
} SharedPtr_def310aa;

typedef struct SharedPtr<XMFImageFileClip> {
    struct XMFImageFileClip *_field1;
} SharedPtr_50463839;

typedef struct SharedPtr<XMFImageTrack> {
    struct XMFImageTrack *_ptr;
} SharedPtr_18dc3c11;

typedef struct SharedPtr<XMFMediaFile> {
    struct XMFMediaFile *_ptr;
} SharedPtr_9e2e1e0b;

typedef struct SharedPtr<XMFVideoClip> {
    struct XMFVideoClip *_ptr;
} SharedPtr_cbbc2efe;

typedef struct SharedPtr<XMFVideoFrame> {
    struct XMFVideoFrame *_field1;
} SharedPtr_43d2f63a;

typedef struct SharedPtr<XMFVideoFrameCocoaLoader> {
    struct XMFVideoFrameCocoaLoader *_ptr;
} SharedPtr_c67bd272;

typedef struct SharedPtr<XMFVideoTrack> {
    struct XMFVideoTrack *_ptr;
} SharedPtr_43668d6b;

typedef struct SharedPtr<XMJBridgeCDNService> {
    struct XMJBridgeCDNService *_ptr;
} SharedPtr_35b112bd;

typedef struct SharedPtr<XMJCamResourceManager> {
    struct XMJCamResourceManager *_ptr;
} SharedPtr_8810e4e6;

typedef struct SharedPtr<XMJCamSession> {
    struct XMJCamSession *_ptr;
} SharedPtr_8d35978a;

typedef struct SharedPtr<XMJCamoSession> {
    struct XMJCamoSession *_ptr;
} SharedPtr_a4453dff;

typedef struct SharedPtr<XMJCaptureSession> {
    struct XMJCaptureSession *_ptr;
} SharedPtr_722639b5;

typedef struct SharedPtr<XMJClipSegment> {
    struct XMJClipSegment *_ptr;
} SharedPtr_67e01d81;

typedef struct SharedPtr<XMJExportManager> {
    struct XMJExportManager *_ptr;
} SharedPtr_9102e06d;

typedef struct SharedPtr<XMJLowerThirdImageGenerator> {
    struct XMJLowerThirdImageGenerator *_ptr;
} SharedPtr_874da711;

typedef struct SharedPtr<XMJMaterialCategory> {
    struct XMJMaterialCategory *_ptr;
} SharedPtr_93f81c78;

typedef struct SharedPtr<XMJMaterialInfo> {
    struct XMJMaterialInfo *_ptr;
} SharedPtr_3c77faaa;

typedef struct SharedPtr<XMJMaterialManager> {
    struct XMJMaterialManager *_ptr;
} SharedPtr_153997a4;

typedef struct SharedPtr<XMJMovieComposingSessionDelegate> {
    struct XMJMovieComposingSessionDelegate *_ptr;
} SharedPtr_d86e1db6;

typedef struct SharedPtr<XMJMovieSessionV3> {
    struct XMJMovieSessionV3 *_ptr;
} SharedPtr_4dc38317;

typedef struct SharedPtr<XMJSegment> {
    struct XMJSegment *_ptr;
} SharedPtr_3fcb0b09;

typedef struct SharedPtr<XMJServiceManager> {
    struct XMJServiceManager *_ptr;
} SharedPtr_3bf8917f;

typedef struct SharedPtr<XMJSpeechManager> {
    struct XMJSpeechManager *_ptr;
} SharedPtr_c8455cb5;

typedef struct SharedPtr<XMSCaptionSegment> {
    struct XMSCaptionSegment *_field1;
} SharedPtr_ee0693f7;

typedef struct SharedPtr<XMSClipSegment> {
    struct XMSClipSegment *_field1;
} SharedPtr_def5e935;

typedef struct SharedPtr<XMSContentDescSegment> {
    struct XMSContentDescSegment *_field1;
} SharedPtr_30bb3be5;

typedef struct SharedPtr<XMSElementSegment> {
    struct XMSElementSegment *_field1;
} SharedPtr_65cdf39d;

typedef struct SharedPtr<XMSEmoticonSegment> {
    struct XMSEmoticonSegment *_field1;
} SharedPtr_19b98a8f;

typedef struct SharedPtr<XMSExportSettings> {
    struct XMSExportSettings *_field1;
} SharedPtr_49b709ef;

typedef struct SharedPtr<XMSFancyTextSegment> {
    struct XMSFancyTextSegment *_field1;
} SharedPtr_48a2958b;

typedef struct SharedPtr<XMSMovieTitleSegment> {
    struct XMSMovieTitleSegment *_field1;
} SharedPtr_ba8d92ee;

typedef struct SharedPtr<XMSMusicSegment> {
    struct XMSMusicSegment *_field1;
} SharedPtr_3bac6d1d;

typedef struct SharedPtr<XMSNarrationSegment> {
    struct XMSNarrationSegment *_field1;
} SharedPtr_4cfc5e71;

typedef struct SharedPtr<XMSPlaybackSession> {
    struct XMSPlaybackSession *_ptr;
} SharedPtr_37df0930;

typedef struct SharedPtr<XMSPlaybackWindowCon> {
    struct XMSPlaybackWindowCon *_ptr;
} SharedPtr_f7d96994;

typedef struct SharedPtr<XMSProject> {
    struct XMSProject *_ptr;
} SharedPtr_b444224d;

typedef struct SharedPtr<XMSSegment> {
    struct XMSSegment *_field1;
} SharedPtr_104d4a7a;

typedef struct SharedPtr<XMSStoryline> {
    struct XMSStoryline *_field1;
} SharedPtr_4e87c261;

typedef struct SharedPtr<XMSTransitionDesc> {
    struct XMSTransitionDesc *_ptr;
} SharedPtr_6bdad1cb;

typedef struct SharedPtr<XMSTransitionSegment> {
    struct XMSTransitionSegment *_field1;
} SharedPtr_a0f5f6c2;

typedef struct SharedPtr<XMSWhenWhereSegment> {
    struct XMSWhenWhereSegment *_field1;
} SharedPtr_68ff3a12;

typedef struct SharedPtr<XPiecewiseValueMapper<XTMTime, double, kDoubleNan>> {
    void *_ptr;
} SharedPtr_1b54ecb7;

typedef struct SharedPtr<XPiecewiseValueMapper<double, XTMTime, kTMInvalidTime>> {
    void *_ptr;
} SharedPtr_9eb4f64e;

typedef struct SharedPtr<XVCExportSession> {
    struct XVCExportSession *_ptr;
} SharedPtr_3f9afb9a;

typedef struct SharedPtr<XVIOnDemandPreprocManager> {
    struct XVIOnDemandPreprocManager *_ptr;
} SharedPtr_b1b13439;

typedef struct SharedPtr<XVIPreprocTask> {
    struct XVIPreprocTask *_field1;
} SharedPtr_6de59d61;

typedef struct StrongShape<tflite::gpu::Layout::BHWC> {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
} StrongShape_90d9bb64;

typedef struct SyntaxList<WCDB::OrderingTerm> {
    CDUnknownFunctionPointerType *_field1;
    struct __list_node_base<WCDB::OrderingTerm, void *> {
        void *_field1;
        void *_field2;
    } _field2;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<WCDB::OrderingTerm, void *>>> {
        unsigned long long _field1;
    } _field3;
} SyntaxList_943f464f;

typedef struct WeImage<unsigned char> {
    struct shared_ptr<wevision::WeImage<unsigned char>::Imp> _field1;
} WeImage_f6985655;

typedef struct WeakNSObject<FlutterEngine> {
    RefPtr_fcf19635 container_;
    struct DebugThreadChecker checker_;
} WeakNSObject_ed46922b;

typedef struct WeakNSObject<FlutterKeyboardManager> {
    RefPtr_fcf19635 _field1;
    struct DebugThreadChecker _field2;
} WeakNSObject_2ac6be55;

typedef struct WeakNSObject<FlutterViewController> {
    RefPtr_fcf19635 container_;
    struct DebugThreadChecker checker_;
} WeakNSObject_d08cd568;

typedef struct WeakPtr<XMJPublisherSessionMetrics> {
    struct XMJPublisherSessionMetrics *_ptr;
    struct WeakRefType *m_refs;
} WeakPtr_dad450d4;

typedef struct WeakPtr<XMJResourcePreloader> {
    struct XMJResourcePreloader *_ptr;
    struct WeakRefType *m_refs;
} WeakPtr_55ba20e6;

typedef struct WeakPtr<flutter::AccessibilityBridgeIos> {
    struct AccessibilityBridgeIos *ptr_;
    struct RefPtr<fml::internal::WeakPtrFlag> flag_;
    struct DebugThreadChecker checker_;
} WeakPtr_9998a1eb;

typedef struct WeakPtr<flutter::FlutterPlatformViewsController> {
    struct FlutterPlatformViewsController *ptr_;
    struct RefPtr<fml::internal::WeakPtrFlag> flag_;
    struct DebugThreadChecker checker_;
} WeakPtr_bf33b10e;

typedef struct WeakPtr<flutter::PlatformView> {
    struct PlatformView *_field1;
    struct RefPtr<fml::internal::WeakPtrFlag> _field2;
    struct DebugThreadChecker _field3;
} WeakPtr_db4fcd97;

typedef struct deque<TPAudioRouteDescription, std::allocator<TPAudioRouteDescription>> {
    struct __split_buffer<TPAudioRouteDescription *, std::allocator<TPAudioRouteDescription *>> {
        struct TPAudioRouteDescription **__first_;
        struct TPAudioRouteDescription **__begin_;
        struct TPAudioRouteDescription **__end_;
        struct __compressed_pair<TPAudioRouteDescription **, std::allocator<TPAudioRouteDescription *>> {
            struct TPAudioRouteDescription **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<TPAudioRouteDescription>> {
        unsigned long long __value_;
    } __size_;
} deque_19df0b0c;

typedef struct function<bool (const char *, const char *, int (*)(void *, int, const char **, const char **), void *, char **)> {
    struct __value_func<bool (const char *, const char *, int (*)(void *, int, const char **, const char **), void *, char **)> {
        struct type _field1;
        void *_field2;
    } _field1;
} function_fdb5bcff;

typedef struct function<bool (const std::shared_ptr<ChatLogSessionItem>&, const std::shared_ptr<ChatLogSessionItem>&)> {
    struct __value_func<bool (const std::shared_ptr<ChatLogSessionItem>&, const std::shared_ptr<ChatLogSessionItem>&)> {
        struct type _field1;
        void *_field2;
    } _field1;
} function_4cdf695e;

typedef struct function<void ()> {
    struct __value_func<void ()> {
        struct type __buf_;
        void *__f_;
    } __f_;
} function_ffe40f9b;

typedef struct function<void (AVCapturePhoto *)> {
    struct __value_func<void (AVCapturePhoto *)> {
        struct type __buf_;
        void *__f_;
    } __f_;
} function_8fed91df;

typedef struct function<void (CGSize, CGAffineTransform)> {
    struct __value_func<void (CGSize, CGAffineTransform)> {
        struct type __buf_;
        void *__f_;
    } __f_;
} function_07344cbc;

typedef struct function<void (CGSize, CGAffineTransform, double)> {
    struct __value_func<void (CGSize, CGAffineTransform, double)> {
        struct type __buf_;
        void *__f_;
    } __f_;
} function_8a9ca1d4;

typedef struct function<void (const char *, std::vector<sqlitelint::Issue>)> {
    struct __value_func<void (const char *, std::vector<sqlitelint::Issue>)> {
        struct type _field1;
        void *_field2;
    } _field1;
} function_ddadd5d5;

typedef struct function<void (const puppet::fdn::Memory *, unsigned int, unsigned int)> {
    struct __value_func<void (const puppet::fdn::Memory *, unsigned int, unsigned int)> {
        struct type __buf_;
        void *__f_;
    } __f_;
} function_2b6ca66c;

typedef struct function<void (opaqueCMSampleBuffer *)> {
    struct __value_func<void (opaqueCMSampleBuffer *)> {
        struct type __buf_;
        void *__f_;
    } __f_;
} function_52b62172;

typedef struct function<void (opaqueCMSampleBuffer *, AVCaptureDevicePosition)> {
    struct __value_func<void (opaqueCMSampleBuffer *, AVCaptureDevicePosition)> {
        struct type __buf_;
        void *__f_;
    } __f_;
} function_15b34fc7;

typedef struct function<void (std::unique_ptr<flutter::FrameTimingsRecorder>)> {
    struct __value_func<void (std::unique_ptr<flutter::FrameTimingsRecorder>)> {
        struct type __buf_;
        void *__f_;
    } __f_;
} function_a9bd7188;

typedef struct list<mars::comm::ConnRecord, std::allocator<mars::comm::ConnRecord>> {
    struct __list_node_base<mars::comm::ConnRecord, void *> {
        void *_field1;
        void *_field2;
    } _field1;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<mars::comm::ConnRecord, void *>>> {
        unsigned long long _field1;
    } _field2;
} list_a29d43c9;

typedef struct list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>> {
    struct __list_node_base<std::shared_ptr<POPAnimatorItem>, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::shared_ptr<POPAnimatorItem>, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
} list_e34ef07f;

typedef struct list<std::string, std::allocator<std::string>> {
    struct __list_node_base<std::string, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::string, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
} list_ea53b405;

typedef struct map<OMCCaptionItem *, MJCaptionLabel *, OMCCaptionItemCompare, std::allocator<std::pair<OMCCaptionItem *const, MJCaptionLabel *>>> {
    struct __tree<std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, std::__map_value_compare<OMCCaptionItem *, std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, OMCCaptionItemCompare>, std::allocator<std::__value_type<OMCCaptionItem *, MJCaptionLabel *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<OMCCaptionItem *, std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, OMCCaptionItemCompare>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_247f78e2;

typedef struct map<TPCodecID, TPVCodecMaxCapability, std::less<TPCodecID>, std::allocator<std::pair<const TPCodecID, TPVCodecMaxCapability>>> {
    struct __tree<std::__value_type<TPCodecID, TPVCodecMaxCapability>, std::__map_value_compare<TPCodecID, std::__value_type<TPCodecID, TPVCodecMaxCapability>, std::less<TPCodecID>>, std::allocator<std::__value_type<TPCodecID, TPVCodecMaxCapability>>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<TPCodecID, TPVCodecMaxCapability>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__map_value_compare<TPCodecID, std::__value_type<TPCodecID, TPVCodecMaxCapability>, std::less<TPCodecID>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_21358acc;

typedef struct map<WeEffect::CORE_MODEL, std::string, std::less<WeEffect::CORE_MODEL>, std::allocator<std::pair<const WeEffect::CORE_MODEL, std::string>>> {
    struct __tree<std::__value_type<WeEffect::CORE_MODEL, std::string>, std::__map_value_compare<WeEffect::CORE_MODEL, std::__value_type<WeEffect::CORE_MODEL, std::string>, std::less<WeEffect::CORE_MODEL>>, std::allocator<std::__value_type<WeEffect::CORE_MODEL, std::string>>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<WeEffect::CORE_MODEL, std::string>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__map_value_compare<WeEffect::CORE_MODEL, std::__value_type<WeEffect::CORE_MODEL, std::string>, std::less<WeEffect::CORE_MODEL>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_739b6f47;

typedef struct map<char *, char *, std::less<char *>, std::allocator<std::pair<char *const, char *>>> {
    struct __tree<std::__value_type<char *, char *>, std::__map_value_compare<char *, std::__value_type<char *, char *>, std::less<char *>>, std::allocator<std::__value_type<char *, char *>>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<char *, char *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__map_value_compare<char *, std::__value_type<char *, char *>, std::less<char *>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_9cbfea20;

typedef struct map<int, std::string, std::less<int>, std::allocator<std::pair<const int, std::string>>> {
    struct __tree<std::__value_type<int, std::string>, std::__map_value_compare<int, std::__value_type<int, std::string>, std::less<int>>, std::allocator<std::__value_type<int, std::string>>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<int, std::string>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::string>, std::less<int>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_5b36435d;

typedef struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> {
    struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_c53b27e0;

typedef struct map<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>, std::less<std::string>, std::allocator<std::pair<const std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>>> {
    struct __tree<std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>, std::__map_value_compare<std::string, std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>>, std::less<std::string>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_941ed0ad;

typedef struct map<unsigned int, unsigned long long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long long>>> {
    struct __tree<std::__value_type<unsigned int, unsigned long long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long long>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned long long>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long long>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long long>, std::less<unsigned int>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_94801aa5;

typedef struct mat<3, 3, float, glm::packed_highp> {
    struct vec<3, float, glm::packed_highp> _field1[3];
} mat_1cb8bd66;

typedef struct multimap<NSString *, CGRect, WCFinderKeywordEqualId, std::allocator<std::pair<NSString *const, CGRect>>> {
    struct __tree<std::__value_type<NSString *, CGRect>, std::__map_value_compare<NSString *, std::__value_type<NSString *, CGRect>, WCFinderKeywordEqualId>, std::allocator<std::__value_type<NSString *, CGRect>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<NSString *, CGRect>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, CGRect>, WCFinderKeywordEqualId>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} multimap_b3919d51;

typedef struct optional<CGRect> {
    union {
        char __null_state_;
        struct CGRect __val_;
    } ;
    _Bool __engaged_;
} optional_865a0c94;

typedef struct optional<CaraPredictionPositive *> {
    CDUnion_f780d1aa _field1;
    _Bool _field2;
} optional_16fe3c19;

typedef struct optional<NSData *> {
    CDUnion_f780d1aa _field1;
    _Bool _field2;
} optional_cf1cf573;

typedef struct optional<NSString *> {
    CDUnion_f780d1aa _field1;
    _Bool _field2;
} optional_8fbbe2b2;

typedef struct optional<bool> {
    CDUnion_2739e4df _field1;
    _Bool _field2;
} optional_a953c506;

typedef struct optional<float> {
    union {
        char _field1;
        float _field2;
    } _field1;
    _Bool _field2;
} optional_568b6bb2;

typedef struct optional<int> {
    CDUnion_073fe123 _field1;
    _Bool _field2;
} optional_3baeb69b;

typedef struct optional<std::string> {
    union {
        char __null_state_;
        basic_string_5909a4e2 __val_;
    } ;
    _Bool __engaged_;
} optional_9436b898;

typedef struct optional<wesvg::RGBColor> {
    union {
        char _field1;
        struct RGBColor {
            unsigned char _field1;
            unsigned char _field2;
            unsigned char _field3;
        } _field2;
    } _field1;
    _Bool _field2;
} optional_91f618e0;

typedef struct pair<NSData *, unsigned long> {
    id _field1;
    unsigned long long _field2;
} pair_e4c09457;

typedef struct pair<bool, KeyValueHolder> {
    _Bool _field1;
    struct KeyValueHolder _field2;
} pair_95c78d76;

typedef struct pair<double, double> {
    double _field1;
    double _field2;
} pair_b2618ff2;

typedef struct pair<std::vector<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>>, std::vector<MJTileReusableAttributes *>> {
    vector_e62d36fb _field1;
    vector_1d27761d _field2;
} pair_744b91e3;

typedef struct queue<std::string, std::deque<std::string>> {
    struct deque<std::string, std::allocator<std::string>> c;
} queue_7efded04;

typedef struct scoped_refptr<lite_base::SingleThreadTaskRunner> {
    struct SingleThreadTaskRunner *ptr_;
} scoped_refptr_249dff9e;

typedef struct scoped_refptr<liteav::OnlineLogger> {
    struct OnlineLogger *ptr_;
} scoped_refptr_c1332177;

typedef struct shared_ptr<ChatLogDataItem> {
    struct ChatLogDataItem *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_09342520;

typedef struct shared_ptr<ChatLogSessionItem> {
    struct ChatLogSessionItem *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_5102c92c;

typedef struct shared_ptr<CronetCallback> {
    struct CronetCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_7048591f;

typedef struct shared_ptr<ExpandUIConfig> {
    struct ExpandUIConfig *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_448daa3e;

typedef struct shared_ptr<POPAnimatorItem> {
    struct POPAnimatorItem *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_1553c9f8;

typedef struct shared_ptr<TPThumbPlayerEventRecordCallbackWrapper> {
    struct TPThumbPlayerEventRecordCallbackWrapper *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_61da5af9;

typedef struct shared_ptr<WCDBSharedLock> {
    struct WCDBSharedLock *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_45de587b;

typedef struct shared_ptr<WCFDMonitorThreadInfo> {
    struct WCFDMonitorThreadInfo *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_896ae81e;

typedef struct shared_ptr<WCURLSessionTaskCallBack> {
    struct WCURLSessionTaskCallBack *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_70ca3131;

typedef struct shared_ptr<XMJAssetInfo> {
    struct XMJAssetInfo *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_5d30c34f;

typedef struct shared_ptr<XMJLyricInfo> {
    struct XMJLyricInfo *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_10b9d6f7;

typedef struct shared_ptr<XMJMaasCore> {
    struct XMJMaasCore *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_32a93604;

typedef struct shared_ptr<XMJMoviePlayer> {
    struct XMJMoviePlayer *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_c90976e0;

typedef struct shared_ptr<XMJMusicInfo> {
    struct XMJMusicInfo *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_c29e59e1;

typedef struct shared_ptr<XMJRenderView> {
    struct XMJRenderView *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_85cde1ea;

typedef struct shared_ptr<XMJTaskTrace> {
    struct XMJTaskTrace *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_1988f396;

typedef struct shared_ptr<affroam::RoamBackupPackageManagerDispatcher> {
    struct RoamBackupPackageManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_8c935b55;

typedef struct shared_ptr<affroam::RoamBackupperDispatcher> {
    struct RoamBackupperDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_acec5b40;

typedef struct shared_ptr<affroam::RoamDeviceManagerDispatcher> {
    struct RoamDeviceManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_f3dd2658;

typedef struct shared_ptr<affroam::RoamManagerDispatcher> {
    struct RoamManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_322d64af;

typedef struct shared_ptr<affroam::RoamMediaFormatterDispatcher> {
    struct RoamMediaFormatterDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_5413576b;

typedef struct shared_ptr<affroam::RoamTaskDispatcher> {
    struct RoamTaskDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_f523a40b;

typedef struct shared_ptr<blink::BindingApp> {
    struct BindingApp *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_013fd618;

typedef struct shared_ptr<blink::HTMLCanvasViewNG> {
    struct HTMLCanvasViewNG *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_3299e206;

typedef struct shared_ptr<blink::IOSCanvasViewDelegateGL> {
    struct IOSCanvasViewDelegateGL *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_0ffddd04;

typedef struct shared_ptr<blink::ImageDecodeCache> {
    struct ImageDecodeCache *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_bf7a578a;

typedef struct shared_ptr<blink::ResourceLoader> {
    struct ResourceLoader *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_34631cd5;

typedef struct shared_ptr<cara::CaraCppConsumeSessionProphetDispatcher> {
    struct CaraCppConsumeSessionProphetDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_558fddba;

typedef struct shared_ptr<cara::CaraCppDispatcher> {
    struct CaraCppDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_598b69b9;

typedef struct shared_ptr<cara::CaraCppFinderPublishProphetDispatcher> {
    struct CaraCppFinderPublishProphetDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_be486c35;

typedef struct shared_ptr<cara::CaraCppJoinLiveQualityProphetDispatcher> {
    struct CaraCppJoinLiveQualityProphetDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_38460d65;

typedef struct shared_ptr<cara::CaraCppLiveCellProphetDispatcher> {
    struct CaraCppLiveCellProphetDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_4a79c824;

typedef struct shared_ptr<cara::CaraCppLiveFeatureCenterDispatcher> {
    struct CaraCppLiveFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_c915e89a;

typedef struct shared_ptr<cara::CaraCppLiveReddotProphetDispatcher> {
    struct CaraCppLiveReddotProphetDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_93e5c690;

typedef struct shared_ptr<cara::CaraCppSessionFeatureCenterDispatcher> {
    struct CaraCppSessionFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_4f323c5b;

typedef struct shared_ptr<cara::CaraNativeAccountFeatureCenterDispatcher> {
    struct CaraNativeAccountFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_fec15eb6;

typedef struct shared_ptr<cara::CaraNativeConsumeSessionDispatcher> {
    struct CaraNativeConsumeSessionDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_e122bb48;

typedef struct shared_ptr<cara::CaraNativeContactDispatcher> {
    struct CaraNativeContactDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_b151e2bf;

typedef struct shared_ptr<cara::CaraNativeContactFeatureCenterDispatcher> {
    struct CaraNativeContactFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_5a5bd793;

typedef struct shared_ptr<cara::CaraNativeDiscoverViewFeatureCenterDispatcher> {
    struct CaraNativeDiscoverViewFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_e4f6c773;

typedef struct shared_ptr<cara::CaraNativeFeatureCenterDispatcher> {
    struct CaraNativeFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_0ce9db19;

typedef struct shared_ptr<cara::CaraNativeFinderFeatureCenterDispatcher> {
    struct CaraNativeFinderFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_3855443d;

typedef struct shared_ptr<cara::CaraNativeFinderPublishProphetContextDispatcher> {
    struct CaraNativeFinderPublishProphetContextDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_d18e0a09;

typedef struct shared_ptr<cara::CaraNativeJoinLiveQualityProphetContextDispatcher> {
    struct CaraNativeJoinLiveQualityProphetContextDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_0d2ada96;

typedef struct shared_ptr<cara::CaraNativeLiveCellProphetContextDispatcher> {
    struct CaraNativeLiveCellProphetContextDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_610a3e5a;

typedef struct shared_ptr<cara::CaraNativeLiveFeatureCenterDispatcher> {
    struct CaraNativeLiveFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_6c02f59b;

typedef struct shared_ptr<cara::CaraNativeLiveReddotProphetContextDispatcher> {
    struct CaraNativeLiveReddotProphetContextDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_78960131;

typedef struct shared_ptr<cara::CaraNativeProphetPredictPositiveCallbackDispatcher> {
    struct CaraNativeProphetPredictPositiveCallbackDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_a733cfee;

typedef struct shared_ptr<cara::CaraNativeSessionFeatureCenterDispatcher> {
    struct CaraNativeSessionFeatureCenterDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_b184c03e;

typedef struct shared_ptr<cv::Mat> {
    struct Mat *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_8d48a68a;

typedef struct shared_ptr<ecs::EcsManagerDispatcher> {
    struct EcsManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_484ed226;

typedef struct shared_ptr<emoticon::EmoticonDesignerPortfolioPackDataSourceDispatcher> {
    struct EmoticonDesignerPortfolioPackDataSourceDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_df1580d1;

typedef struct shared_ptr<emoticon::EmoticonFinderDesignerDataSourceDispatcher> {
    struct EmoticonFinderDesignerDataSourceDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_01425a44;

typedef struct shared_ptr<emoticon::EmoticonMetaStorageDispatcher> {
    struct EmoticonMetaStorageDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_0be0b842;

typedef struct shared_ptr<flutter::PlatformMessageHandler> {
    struct PlatformMessageHandler *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_21a0cd4f;

typedef struct shared_ptr<impeller::ContextMTL> {
    struct ContextMTL *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_ec18262e;

typedef struct shared_ptr<liteav::manager::AudioEffectManager> {
    struct AudioEffectManager *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_08ab110d;

typedef struct shared_ptr<liteav::manager::BeautyManagerProxy> {
    struct BeautyManagerProxy *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_a0f684fb;

typedef struct shared_ptr<liteav::video::PixelFrameMetaData> {
    struct PixelFrameMetaData *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_1255c1d2;

typedef struct shared_ptr<liteav::video::RPSFramerateCallback> {
    struct RPSFramerateCallback *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_315ac7d2;

typedef struct shared_ptr<liteav::video::VideoConsumer::Client> {
    struct Client *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_b57d0861;

typedef struct shared_ptr<liteav::video::VideoProducer::Client> {
    struct Client *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_79c0c4be;

typedef struct shared_ptr<liteav::video::VideoStats> {
    struct VideoStats *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_679b269c;

typedef struct shared_ptr<mars::cdn::Get3rdDnsCallback> {
    struct Get3rdDnsCallback *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_5585d7e6;

typedef struct shared_ptr<mmfg::OcrApi> {
    struct OcrApi *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_34bc0e86;

typedef struct shared_ptr<pag::PAGDecoder> {
    struct PAGDecoder *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_62164be8;

typedef struct shared_ptr<pag::PAGImage> {
    struct PAGImage *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_d87a8cf2;

typedef struct shared_ptr<pag::PAGLayer> {
    struct PAGLayer *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_69e1d727;

typedef struct shared_ptr<pag::PAGSurface> {
    struct PAGSurface *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_d7de483d;

typedef struct shared_ptr<rfx::RfxPagFile> {
    struct RfxPagFile *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_fff0cd15;

typedef struct shared_ptr<rfx::RfxPagSurface> {
    struct RfxPagSurface *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_4c3e2e39;

typedef struct shared_ptr<rfx::RfxThreadPool> {
    struct RfxThreadPool *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_fb084d9c;

typedef struct shared_ptr<skyline::PageConfig> {
    struct PageConfig *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_d0a3146a;

typedef struct shared_ptr<star::AffStarDataManagerDispatcher> {
    struct AffStarDataManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_a1c0600b;

typedef struct shared_ptr<star::AffStarManagerDispatcher> {
    struct AffStarManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_3136c3af;

typedef struct shared_ptr<star::AffStarOptManagerDispatcher> {
    struct AffStarOptManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_cfe6a27f;

typedef struct shared_ptr<star::AffStarSyncManagerDispatcher> {
    struct AffStarSyncManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_cff13931;

typedef struct shared_ptr<std::vector<vm_region_info>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_c96e8858;

typedef struct shared_ptr<unit_rc::BaseRC> {
    struct BaseRC *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_ec19df4a;

typedef struct shared_ptr<unsigned char> {
    char *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_b948f23b;

typedef struct shared_ptr<unsigned int> {
    unsigned int *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_b119579c;

typedef struct shared_ptr<voipmp::VoIPMPIlinkSDKStatAPIDispatcher> {
    struct VoIPMPIlinkSDKStatAPIDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_2c1184bf;

typedef struct shared_ptr<voipmp::VoIPMPSystemAuthAPIDispatcher> {
    struct VoIPMPSystemAuthAPIDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_4e8fd9fa;

typedef struct shared_ptr<voipmp::VoIPMPSystemAuthNativeAPIDispatcher> {
    struct VoIPMPSystemAuthNativeAPIDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_b77fd022;

typedef struct shared_ptr<voipmp::VoipmpCoreApiServiceDispatcher> {
    struct VoipmpCoreApiServiceDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_66b52eba;

typedef struct shared_ptr<voipmp::VoipmpCoreImplServiceDispatcher> {
    struct VoipmpCoreImplServiceDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_81245fc3;

typedef struct shared_ptr<volatile bool> {
    _Bool *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_2b1ef54d;

typedef struct shared_ptr<vqm::VQMAPIDispatcher> {
    struct VQMAPIDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_c92d46f7;

typedef struct shared_ptr<vqm::VQMConfAPIDispatcher> {
    struct VQMConfAPIDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_b1180922;

typedef struct shared_ptr<vqm::VQMObserverDispatcher> {
    struct VQMObserverDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_27ac3723;

typedef struct shared_ptr<wcrte::RTEAttachmentNativeItemDispatcher> {
    struct RTEAttachmentNativeItemDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_c61edfa8;

typedef struct shared_ptr<wenote::WeNoteAffDelegateDispatcher> {
    struct WeNoteAffDelegateDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_fbed05fd;

typedef struct shared_ptr<wenote::WeNoteCPPInstanceDispatcher> {
    struct WeNoteCPPInstanceDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_01c9df31;

typedef struct shared_ptr<wenote::WeNoteFlutterInstanceDispatcher> {
    struct WeNoteFlutterInstanceDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_921967b6;

typedef struct shared_ptr<wenote::WenoteFlutterManagerDispatcher> {
    struct WenoteFlutterManagerDispatcher *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_9af8a427;

typedef struct shared_ptr<wesvg::RenderElement> {
    struct RenderElement *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_3de03f82;

typedef struct shared_ptr<wesvg::RenderModel> {
    struct RenderModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_fa695132;

typedef struct shared_ptr<wevision::HardwareBuffer> {
    struct HardwareBuffer *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_4854a30e;

typedef struct shared_ptr<wevision::XImageFeat> {
    struct XImageFeat *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_772c274f;

typedef struct shared_ptr<wevision::XOneshotDet> {
    struct XOneshotDet *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_17e3e5e7;

typedef struct shared_ptr<wxvoipsdk::ILinkPusherAudioDataCallback> {
    struct ILinkPusherAudioDataCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_f88d11c8;

typedef struct shared_ptr<wxvoipsdk::TRTCAudioEffectCallback> {
    struct TRTCAudioEffectCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_e3b70170;

typedef struct shared_ptr<zidl::ObjHolder2> {
    struct ObjHolder2 *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_96b08bd7;

typedef struct shared_ptr<zidl::ObjHolder> {
    struct ObjHolder *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_f19a3d3a;

typedef struct shared_ptr<zidl::ZClientInvoker> {
    struct ZClientInvoker *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_91287a9c;

typedef struct sk_sp<GrDirectContext> {
    struct GrDirectContext *fPtr;
} sk_sp_f030eba7;

typedef struct sk_sp<SkImage> {
    struct SkImage *fPtr;
} sk_sp_851faaab;

typedef struct sk_sp<SkSurface> {
    struct SkSurface *fPtr;
} sk_sp_ce222020;

typedef struct sk_sp<flutter::DlImage> {
    struct DlImage *fPtr;
} sk_sp_5de25408;

typedef struct span<const unsigned char, 18446744073709551615UL> {
    unsigned long long _field1;
    char *_field2;
} span_05dffa63;

typedef struct tuple<bool, bool, CGPoint> {
    struct __tuple_impl<std::__tuple_indices<0, 1, 2>, bool, bool, CGPoint> {
        _Bool _field1;
        _Bool _field2;
        struct CGPoint _field3;
    } _field1;
} tuple_4c565a4a;

typedef struct tuple<bool, const std::shared_ptr<std::vector<float>>&, float> {
    struct __tuple_impl<std::__tuple_indices<0, 1, 2>, bool, const std::shared_ptr<std::vector<float>>&, float> {
        _Bool _field1;
        void *_field2;
        float _field3;
    } _field1;
} tuple_aeb18edb;

typedef struct tuple<bool, double> {
    struct __tuple_impl<std::__tuple_indices<0, 1>, bool, double> {
        _Bool _field1;
        double _field2;
    } _field1;
} tuple_1f478d1c;

typedef struct unique_ptr<flutter::PointerDataPacket, std::default_delete<flutter::PointerDataPacket>> {
    struct __compressed_pair<flutter::PointerDataPacket *, std::default_delete<flutter::PointerDataPacket>> {
        struct PointerDataPacket *_field1;
    } _field1;
} unique_ptr_efd15f96;

typedef struct unique_ptr<flutter::Shell, std::default_delete<flutter::Shell>> {
    struct __compressed_pair<flutter::Shell *, std::default_delete<flutter::Shell>> {
        struct Shell *__value_;
    } __ptr_;
} unique_ptr_49980375;

typedef struct unique_ptr<liteav::HttpClient::Request, std::default_delete<liteav::HttpClient::Request>> {
    struct __compressed_pair<liteav::HttpClient::Request *, std::default_delete<liteav::HttpClient::Request>> {
        struct Request *_field1;
    } _field1;
} unique_ptr_0164a445;

typedef struct unique_ptr<liteav::audio::AudioFrame, std::default_delete<liteav::audio::AudioFrame>> {
    struct __compressed_pair<liteav::audio::AudioFrame *, std::default_delete<liteav::audio::AudioFrame>> {
        struct AudioFrame *__value_;
    } __ptr_;
} unique_ptr_ff529614;

typedef struct unique_ptr<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>>> {
    struct __compressed_pair<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>*, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>>> {
        void *_field1;
    } _field1;
} unique_ptr_100b2e14;

typedef struct unique_ptr<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>>> {
    struct __compressed_pair<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>*, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>>> {
        void *_field1;
    } _field1;
} unique_ptr_fc608599;

typedef struct unique_ptr<liteav::video::VideoFrame, std::default_delete<liteav::video::VideoFrame>> {
    struct __compressed_pair<liteav::video::VideoFrame *, std::default_delete<liteav::video::VideoFrame>> {
        struct VideoFrame *__value_;
    } __ptr_;
} unique_ptr_4b64f7fb;

typedef struct vector<FileInfo, std::allocator<FileInfo>> {
    struct FileInfo *_field1;
    struct FileInfo *_field2;
    struct __compressed_pair<FileInfo *, std::allocator<FileInfo>> {
        struct FileInfo *_field1;
    } _field3;
} vector_3510895a;

typedef struct vector<MJTileReusableAttributes *, std::allocator<MJTileReusableAttributes *>> {
    id *_field1;
    id *_field2;
    struct __compressed_pair<MJTileReusableAttributes *__strong *, std::allocator<MJTileReusableAttributes *>> {
        id *_field1;
    } _field3;
} vector_1d27761d;

typedef struct vector<PreviewCoverItem, std::allocator<PreviewCoverItem>> {
    struct PreviewCoverItem *_field1;
    struct PreviewCoverItem *_field2;
    struct __compressed_pair<PreviewCoverItem *, std::allocator<PreviewCoverItem>> {
        struct PreviewCoverItem *_field1;
    } _field3;
} vector_3b4bbe29;

typedef struct vector<QBAR_INFO, std::allocator<QBAR_INFO>> {
    struct QBAR_INFO *_field1;
    struct QBAR_INFO *_field2;
    struct __compressed_pair<QBAR_INFO *, std::allocator<QBAR_INFO>> {
        struct QBAR_INFO *_field1;
    } _field3;
} vector_95637d69;

typedef struct vector<QBAR_POINT, std::allocator<QBAR_POINT>> {
    struct QBAR_POINT *_field1;
    struct QBAR_POINT *_field2;
    struct __compressed_pair<QBAR_POINT *, std::allocator<QBAR_POINT>> {
        struct QBAR_POINT *_field1;
    } _field3;
} vector_d4107ee0;

typedef struct vector<QBAR_RESULT, std::allocator<QBAR_RESULT>> {
    struct QBAR_RESULT *_field1;
    struct QBAR_RESULT *_field2;
    struct __compressed_pair<QBAR_RESULT *, std::allocator<QBAR_RESULT>> {
        struct QBAR_RESULT *_field1;
    } _field3;
} vector_04675aae;

typedef struct vector<TPAVProgramInfo, std::allocator<TPAVProgramInfo>> {
    struct TPAVProgramInfo *_field1;
    struct TPAVProgramInfo *_field2;
    struct __compressed_pair<TPAVProgramInfo *, std::allocator<TPAVProgramInfo>> {
        struct TPAVProgramInfo *_field1;
    } _field3;
} vector_5a53d670;

typedef struct vector<TPMediaTrackInfo, std::allocator<TPMediaTrackInfo>> {
    struct TPMediaTrackInfo *_field1;
    struct TPMediaTrackInfo *_field2;
    struct __compressed_pair<TPMediaTrackInfo *, std::allocator<TPMediaTrackInfo>> {
        struct TPMediaTrackInfo *_field1;
    } _field3;
} vector_fdf80d0c;

typedef struct vector<TPPlayerRichMediaFeature, std::allocator<TPPlayerRichMediaFeature>> {
    struct TPPlayerRichMediaFeature *_field1;
    struct TPPlayerRichMediaFeature *_field2;
    struct __compressed_pair<TPPlayerRichMediaFeature *, std::allocator<TPPlayerRichMediaFeature>> {
        struct TPPlayerRichMediaFeature *_field1;
    } _field3;
} vector_f4e3e6bf;

typedef struct vector<TPPlayerRichMediaTimeRange, std::allocator<TPPlayerRichMediaTimeRange>> {
    struct TPPlayerRichMediaTimeRange *_field1;
    struct TPPlayerRichMediaTimeRange *_field2;
    struct __compressed_pair<TPPlayerRichMediaTimeRange *, std::allocator<TPPlayerRichMediaTimeRange>> {
        struct TPPlayerRichMediaTimeRange *_field1;
    } _field3;
} vector_d4921383;

typedef struct vector<TensorData, std::__1::allocator<TensorData>> {
    struct TensorData *_field1;
    struct TensorData *_field2;
    struct __compressed_pair<TensorData *, std::__1::allocator<TensorData>> {
        struct TensorData *_field1;
    } _field3;
} vector_1994dafb;

typedef struct vector<WCFinderProfileCard, std::allocator<WCFinderProfileCard>> {
    struct WCFinderProfileCard *_field1;
    struct WCFinderProfileCard *_field2;
    struct __compressed_pair<WCFinderProfileCard *, std::allocator<WCFinderProfileCard>> {
        struct WCFinderProfileCard *_field1;
    } _field3;
} vector_7cafffa0;

typedef struct vector<WeEffect::Rect, std::allocator<WeEffect::Rect>> {
    struct Rect *_field1;
    struct Rect *_field2;
    struct __compressed_pair<WeEffect::Rect *, std::allocator<WeEffect::Rect>> {
        struct Rect *_field1;
    } _field3;
} vector_44833bcd;

typedef struct vector<double, std::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::allocator<double>> {
        double *__value_;
    } __end_cap_;
} vector_0e047154;

typedef struct vector<float, std::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *__value_;
    } __end_cap_;
} vector_8ca568ff;

typedef struct vector<int, std::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::allocator<int>> {
        int *__value_;
    } __end_cap_;
} vector_cd3186ef;

typedef struct vector<long long, std::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::allocator<long long>> {
        long long *__value_;
    } __end_cap_;
} vector_1ee95920;

typedef struct vector<mars::smc::STIDKeyInfo, std::allocator<mars::smc::STIDKeyInfo>> {
    struct STIDKeyInfo *__begin_;
    struct STIDKeyInfo *__end_;
    struct __compressed_pair<mars::smc::STIDKeyInfo *, std::allocator<mars::smc::STIDKeyInfo>> {
        struct STIDKeyInfo *__value_;
    } __end_cap_;
} vector_0827168c;

typedef struct vector<objc_method_description, std::allocator<objc_method_description>> {
    struct objc_method_description *_field1;
    struct objc_method_description *_field2;
    struct __compressed_pair<objc_method_description *, std::allocator<objc_method_description>> {
        struct objc_method_description *_field1;
    } _field3;
} vector_c11dd721;

typedef struct vector<std::pair<FinderStreamDivider *, NSArray<WCFinderDataItem *>*>, std::allocator<std::pair<FinderStreamDivider *, NSArray<WCFinderDataItem *>*>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::pair<FinderStreamDivider *, NSArray<WCFinderDataItem *>*>*, std::allocator<std::pair<FinderStreamDivider *, NSArray<WCFinderDataItem *>*>>> {
        void *_field1;
    } _field3;
} vector_c9a4c9eb;

typedef struct vector<std::pair<LSMFileItem *, NSData *__unsafe_unretained>, std::allocator<std::pair<LSMFileItem *, NSData *__unsafe_unretained>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::pair<LSMFileItem *, NSData *__unsafe_unretained>*, std::allocator<std::pair<LSMFileItem *, NSData *__unsafe_unretained>>> {
        void *_field1;
    } _field3;
} vector_90b82a4e;

typedef struct vector<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>, std::allocator<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>*, std::allocator<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>>> {
        void *_field1;
    } _field3;
} vector_e62d36fb;

typedef struct vector<std::shared_ptr<ChatLogDataItem>, std::allocator<std::shared_ptr<ChatLogDataItem>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::shared_ptr<ChatLogDataItem>*, std::allocator<std::shared_ptr<ChatLogDataItem>>> {
        void *__value_;
    } __end_cap_;
} vector_d88869c6;

typedef struct vector<std::string, std::allocator<std::string>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::string *, std::allocator<std::string>> {
        void *__value_;
    } __end_cap_;
} vector_bfe5b09a;

typedef struct vector<tcmapkit::ArcLineCell *, std::allocator<tcmapkit::ArcLineCell *>> {
    struct ArcLineCell **_field1;
    struct ArcLineCell **_field2;
    struct __compressed_pair<tcmapkit::ArcLineCell **, std::allocator<tcmapkit::ArcLineCell *>> {
        struct ArcLineCell **_field1;
    } _field3;
} vector_60e76471;

typedef struct vector<tcmapkit::IAggregatable *, std::allocator<tcmapkit::IAggregatable *>> {
    struct IAggregatable **_field1;
    struct IAggregatable **_field2;
    struct __compressed_pair<tcmapkit::IAggregatable **, std::allocator<tcmapkit::IAggregatable *>> {
        struct IAggregatable **_field1;
    } _field3;
} vector_fdbda47e;

typedef struct vector<tcmapkit::RGBColor, std::allocator<tcmapkit::RGBColor>> {
    struct RGBColor *_field1;
    struct RGBColor *_field2;
    struct __compressed_pair<tcmapkit::RGBColor *, std::allocator<tcmapkit::RGBColor>> {
        struct RGBColor *_field1;
    } _field3;
} vector_59af8ef9;

typedef struct vector<tiny_cv::Mat, std::allocator<tiny_cv::Mat>> {
    struct Mat *__begin_;
    struct Mat *__end_;
    struct __compressed_pair<tiny_cv::Mat *, std::allocator<tiny_cv::Mat>> {
        struct Mat *__value_;
    } __end_cap_;
} vector_083faa51;

typedef struct vector<tiny_cv::Point_<float>, std::allocator<tiny_cv::Point_<float>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<tiny_cv::Point_<float>*, std::allocator<tiny_cv::Point_<float>>> {
        void *__value_;
    } __end_cap_;
} vector_4c9ad6d1;

typedef struct vector<tpdrm::DrmSchemeType, std::allocator<tpdrm::DrmSchemeType>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<tpdrm::DrmSchemeType *, std::allocator<tpdrm::DrmSchemeType>> {
        int *_field1;
    } _field3;
} vector_e6ac3340;

typedef struct vector<wxvoipsdk::_AudioDeviceInfo, std::allocator<wxvoipsdk::_AudioDeviceInfo>> {
    struct _AudioDeviceInfo *_field1;
    struct _AudioDeviceInfo *_field2;
    struct __compressed_pair<wxvoipsdk::_AudioDeviceInfo *, std::allocator<wxvoipsdk::_AudioDeviceInfo>> {
        struct _AudioDeviceInfo *_field1;
    } _field3;
} vector_c729919e;

typedef struct weak_ptr<liteav::manager::DeviceManager> {
    struct DeviceManager *__ptr_;
    struct __shared_weak_count *__cntrl_;
} weak_ptr_65a257e1;

typedef struct weak_ptr<unit_rc::BaseRC> {
    struct BaseRC *__ptr_;
    struct __shared_weak_count *__cntrl_;
} weak_ptr_cef3ecd1;

typedef struct weak_ptr<wxvoipsdk::IWXConfAudioCallback> {
    struct IWXConfAudioCallback *_field1;
    struct __shared_weak_count *_field2;
} weak_ptr_42c0f24b;

typedef struct weak_ptr<wxvoipsdk::audio::AudioDeviceCapCallback> {
    struct AudioDeviceCapCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
} weak_ptr_380cdd4f;

typedef struct weak_ptr<wxvoipsdk::audio::AudioDevicePlayCallback> {
    struct AudioDevicePlayCallback *__ptr_;
    struct __shared_weak_count *__cntrl_;
} weak_ptr_bc793f5c;

#pragma mark Named Unions

union MapVector2d {
    struct {
        double _field1;
        double _field2;
    } _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
    struct {
        double _field1;
        double _field2;
    } _field3;
};

union MapVector2f {
    CDStruct_6e3f967a _field1;
    CDStruct_6e3f967a _field2;
};

union MapVector4ub {
    CDStruct_6181342a _field1;
    CDStruct_6181342a _field2;
};

union TypeUnion {
    struct PipelineClassifier *_field1;
    struct PipelineRegressor *_field2;
    struct Pipeline *_field3;
    struct GLMRegressor *_field4;
    struct SupportVectorRegressor *_field5;
    struct TreeEnsembleRegressor *_field6;
    struct NeuralNetworkRegressor *_field7;
    struct BayesianProbitRegressor *_field8;
    struct GLMClassifier *_field9;
    struct SupportVectorClassifier *_field10;
    struct TreeEnsembleClassifier *_field11;
    struct NeuralNetworkClassifier *_field12;
    struct KNearestNeighborsClassifier *_field13;
    struct NeuralNetwork *_field14;
    struct ItemSimilarityRecommender *_field15;
    struct CustomModel *_field16;
    struct LinkedModel *_field17;
    struct OneHotEncoder *_field18;
    struct Imputer *_field19;
    struct FeatureVectorizer *_field20;
    struct DictVectorizer *_field21;
    struct Scaler *_field22;
    struct CategoricalMapping *_field23;
    struct Normalizer *_field24;
    struct ArrayFeatureExtractor *_field25;
    struct NonMaximumSuppression *_field26;
    struct Identity *_field27;
    struct TextClassifier *_field28;
    struct WordTagger *_field29;
    struct VisionFeaturePrint *_field30;
    struct SoundAnalysisPreprocessing *_field31;
    struct Gazetteer *_field32;
    struct WordEmbedding *_field33;
};

union _GLKMatrix4 {
    struct {
        float m00;
        float m01;
        float m02;
        float m03;
        float m10;
        float m11;
        float m12;
        float m13;
        float m20;
        float m21;
        float m22;
        float m23;
        float m30;
        float m31;
        float m32;
        float m33;
    } ;
    float m[16];
};

union _GLKVector2 {
    CDStruct_6e3f967a _field1;
    CDStruct_6e3f967a _field2;
    float _field3[2];
};

union _GLKVector3 {
    struct {
        float x;
        float y;
        float z;
    } ;
    struct {
        float r;
        float g;
        float b;
    } ;
    struct {
        float s;
        float t;
        float p;
    } ;
    float v[3];
};

union _GLKVector4 {
    struct {
        float x;
        float y;
        float z;
        float w;
    } ;
    struct {
        float r;
        float g;
        float b;
        float a;
    } ;
    struct {
        float s;
        float t;
        float p;
        float q;
    } ;
    float v[4];
};

union sigval {
    int _field1;
    void *_field2;
};

#pragma mark Typedef'd Unions

typedef union {
    char _field1;
    id _field2;
} CDUnion_f780d1aa;

typedef union {
    char _field1;
    _Bool _field2;
} CDUnion_2739e4df;

typedef union {
    char switcher;
    char __is_valid;
} CDUnion_45fe4260;

typedef union {
    char empty_;
    int value_;
} CDUnion_073fe123;

typedef union {
    float _field1;
    float _field2;
    float _field3;
} CDUnion_04d6de92;

typedef union {
    CDStruct_6181342a rgba;
    unsigned char components[4];
    unsigned int hex;
} CDUnion_a0760c36;

typedef union {
    struct __long {
        char *__data_;
        unsigned long long __size_;
        unsigned int __cap_:63;
        unsigned int __is_long_:1;
    } __l;
    struct __short {
        char __data_[23];
        unsigned char __padding_[0];
        unsigned int __size_:7;
        unsigned int __is_long_:1;
    } __s;
    struct __raw __r;
} CDUnion_fb1c1f9e;

