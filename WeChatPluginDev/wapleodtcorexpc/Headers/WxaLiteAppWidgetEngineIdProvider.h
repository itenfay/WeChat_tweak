//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WxaLiteAppWidgetEngineIdProvider : NSObject
{
    int _engineId;
}

+ (id)sharedInstance;
@property int engineId; // @synthesize engineId=_engineId;
- (id)init;

@end

