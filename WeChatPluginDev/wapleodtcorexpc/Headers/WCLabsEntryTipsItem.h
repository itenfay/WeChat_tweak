//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WCLabsEntryTipsConfigItem;

@interface WCLabsEntryTipsItem : NSObject
{
    WCLabsEntryTipsConfigItem *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCLabsEntryTipsConfigItem *config; // @synthesize config=_config;
- (id)description;
- (long long)compare:(id)arg1;
- (void)onShow;
@property(readonly, nonatomic) int installState;
@property(readonly, nonatomic) int installPriority;
@property(readonly, nonatomic) NSString *packetName;
@property(readonly, nonatomic) NSDictionary *jumpPluginInfo;
@property(readonly, nonatomic) NSString *tips;
- (id)initWithConfig:(id)arg1;

@end

