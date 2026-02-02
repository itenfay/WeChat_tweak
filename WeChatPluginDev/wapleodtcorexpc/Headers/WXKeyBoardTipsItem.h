//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WXKeyBoardTipsItem : NSObject
{
}

- (id)getTipsWithConfig:(id)arg1 defaultValue:(id)arg2;
- (id)getTipsWithExpt:(id)arg1 defaultValue:(id)arg2;
- (void)onClick;
- (void)onShow;
- (_Bool)canShow;
@property(readonly, nonatomic) NSDictionary *jumpPluginInfo;
@property(readonly, nonatomic) NSString *tips;
@property(readonly, nonatomic) unsigned int scene;

@end

