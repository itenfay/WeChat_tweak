//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderEventConfigModel;

@interface WCFinderMiaoJianExtInfoModel : NSObject
{
    WCFinderEventConfigModel *_eventConfig;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderEventConfigModel *eventConfig; // @synthesize eventConfig=_eventConfig;

@end

