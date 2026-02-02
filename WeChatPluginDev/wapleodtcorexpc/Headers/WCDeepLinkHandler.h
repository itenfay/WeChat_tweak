//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCDeepLinkHandler : NSObject
{
}

+ (void)jumpDeepLinkWithoutBitSetControl:(id)arg1 animation:(_Bool)arg2;
+ (void)jumpDeepLink:(id)arg1;
+ (void)jumpDeepLink:(id)arg1 animation:(_Bool)arg2;
+ (_Bool)isActionCodeDeepLink:(id)arg1;
+ (_Bool)isDeepLink:(id)arg1;
+ (id)deepLinkByUrl:(id)arg1;
+ (id)getDeepLinkNameFromUrl:(id)arg1;
+ (id)deepLinkByName:(id)arg1;
+ (void)initialize;

@end

