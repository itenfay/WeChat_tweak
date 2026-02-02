//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NewTipsFilter : NSObject
{
    NSString *_configPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *configPath; // @synthesize configPath=_configPath;
- (_Bool)needRequestLocalTipWhenLauchWithId:(int)arg1 Uid:(id)arg2;
- (_Bool)canShowTipsWithTipsInfo:(id)arg1;
- (_Bool)validateAndDealNewTipsInfoOnReceiveXml:(id)arg1;

@end

