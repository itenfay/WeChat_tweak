//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface DeepLinkParam : NSObject
{
    NSArray *linkArray;
}

+ (id)DeepLinkParamWithLink:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *linkArray; // @synthesize linkArray;
- (id)NextDeepLinkParam;
- (id)init;

@end

