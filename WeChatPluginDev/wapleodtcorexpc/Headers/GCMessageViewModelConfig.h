//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class Channel, NSString;
@protocol GCMessageViewModeUnreadCntProtocol, GCMessageViewModelDelegate;

@interface GCMessageViewModelConfig : NSObject
{
    _Bool _readOnly;
    _Bool _isCache;
    id <GCMessageViewModelDelegate> _viewModelDelgate;
    id <GCMessageViewModeUnreadCntProtocol> _unReadCntDelegate;
    NSString *_chatRoomName;
    long long _channelId;
    NSString *_channelName;
    NSString *_cantSendReason;
    Channel *_channel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) Channel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *cantSendReason; // @synthesize cantSendReason=_cantSendReason;
@property(nonatomic) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(retain, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
@property(nonatomic) __weak id <GCMessageViewModeUnreadCntProtocol> unReadCntDelegate; // @synthesize unReadCntDelegate=_unReadCntDelegate;
@property(nonatomic) __weak id <GCMessageViewModelDelegate> viewModelDelgate; // @synthesize viewModelDelgate=_viewModelDelgate;

@end

