//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString;
@protocol MMConfSDKVideoHWdecDelegate;

@interface MMConfSDKVideoHWdec : NSObject
{
    int mStatus;
    int mDecErrCount;
    struct opaqueCMFormatDescription *m_videoFormatDes;
    struct OpaqueVTDecompressionSession *m_session;
    struct vector<unsigned char, std::allocator<unsigned char>> m_avcCData;
    struct OpaqueCMBlockBuffer *m_videoBlock;
    struct opaqueCMSampleBuffer *m_sampleBuffer;
    int mCodecType;
    int mFormat;
    int mOffset;
    char *mHWYUVbuffer;
    unsigned long long mHWYUVLength;
    _Bool mCallbackErrorOccured;
    int mMemberID;
    NSRecursiveLock *mVideoHWDecLock;
    NSString *_mErrorStr;
    id <MMConfSDKVideoHWdecDelegate> _mHWDecDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMConfSDKVideoHWdecDelegate> mHWDecDelegate; // @synthesize mHWDecDelegate=_mHWDecDelegate;
@property(nonatomic) __weak NSString *mErrorStr; // @synthesize mErrorStr=_mErrorStr;
@property(retain, nonatomic) NSRecursiveLock *mVideoHWDecLock; // @synthesize mVideoHWDecLock;
@property(nonatomic) _Bool mCallbackErrorOccured; // @synthesize mCallbackErrorOccured;
@property(nonatomic) int mMemberID; // @synthesize mMemberID;
- (_Bool)CanUse;
- (void)endDecode;
- (int)decode:(const char *)arg1 dataLen:(int)arg2 codecType:(int)arg3 frameType:(int)arg4 format:(int)arg5;
- (int)initDecode:(int)arg1;
- (void)releaseSampleBufferBlock;
- (int)UpdateHWDecSession;
- (void)RenderImg:(struct __CVBuffer *)arg1;
- (int)decodeOneFrame:(const char *)arg1 dataLen:(int)arg2;
- (int)createSampleBufferBlock:(const char *)arg1 dataLen:(int)arg2;
- (int)createVideoFormatDes:(int)arg1 pXPSData:(const char *)arg2 dataLen:(int)arg3;
- (void)dealloc;
- (id)init;
- (void)InitAllMembers;

@end

