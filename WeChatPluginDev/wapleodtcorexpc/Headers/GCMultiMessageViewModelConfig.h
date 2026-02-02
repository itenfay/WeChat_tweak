//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol GCMultiMessageViewModelDelegate;

@interface GCMultiMessageViewModelConfig : NSObject
{
    _Bool _isRealTimeHotChat;
    NSMutableArray *_msgViewModelConfig;
    long long _defaultChannelId;
    id <GCMultiMessageViewModelDelegate> _multiMessageViewModelDelegate;
    NSMutableDictionary *_cacheDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
@property(nonatomic) __weak id <GCMultiMessageViewModelDelegate> multiMessageViewModelDelegate; // @synthesize multiMessageViewModelDelegate=_multiMessageViewModelDelegate;
@property(nonatomic) _Bool isRealTimeHotChat; // @synthesize isRealTimeHotChat=_isRealTimeHotChat;
@property(nonatomic) long long defaultChannelId; // @synthesize defaultChannelId=_defaultChannelId;
@property(retain, nonatomic) NSMutableArray *msgViewModelConfig; // @synthesize msgViewModelConfig=_msgViewModelConfig;

@end

