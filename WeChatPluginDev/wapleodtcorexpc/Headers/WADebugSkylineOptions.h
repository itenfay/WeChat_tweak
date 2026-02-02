//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WADebugSkylineOptions : NSObject
{
    NSString *_appId;
}

+ (id)getDebugSkylineOptionName:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (_Bool)getWithOption:(long long)arg1;
- (void)setWithOption:(long long)arg1 val:(_Bool)arg2;
- (id)keyWithOption:(long long)arg1;
- (id)initWithAppId:(id)arg1;

@end

