//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCRecommendInfo : NSObject
{
    int recommendType;
    int source;
}

@property(nonatomic) int source; // @synthesize source;
@property(nonatomic) int recommendType; // @synthesize recommendType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

