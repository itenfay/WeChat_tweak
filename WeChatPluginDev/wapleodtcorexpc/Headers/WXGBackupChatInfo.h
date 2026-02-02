//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WXGBackupChatInfo : NSObject
{
    NSString *_bakChatName;
    unsigned long long _msgCount;
    unsigned long long _mediaCount;
    unsigned long long _mediaSize;
    unsigned long long _filterMediaSize;
    unsigned long long _filterMediaCount;
    NSMutableDictionary *_mediaCntInfo;
    NSMutableDictionary *_filterMediaCntInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *filterMediaCntInfo; // @synthesize filterMediaCntInfo=_filterMediaCntInfo;
@property(retain, nonatomic) NSMutableDictionary *mediaCntInfo; // @synthesize mediaCntInfo=_mediaCntInfo;
@property(nonatomic) unsigned long long filterMediaCount; // @synthesize filterMediaCount=_filterMediaCount;
@property(nonatomic) unsigned long long filterMediaSize; // @synthesize filterMediaSize=_filterMediaSize;
@property(nonatomic) unsigned long long mediaSize; // @synthesize mediaSize=_mediaSize;
@property(nonatomic) unsigned long long mediaCount; // @synthesize mediaCount=_mediaCount;
@property(nonatomic) unsigned long long msgCount; // @synthesize msgCount=_msgCount;
@property(copy, nonatomic) NSString *bakChatName; // @synthesize bakChatName=_bakChatName;
- (id)init;

@end

