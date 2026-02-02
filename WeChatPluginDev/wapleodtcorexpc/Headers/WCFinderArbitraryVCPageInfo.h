//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderArbitraryVCPageInfo : NSObject
{
    Class _vcClass;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) Class vcClass; // @synthesize vcClass=_vcClass;

@end

