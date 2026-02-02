//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AppPersonalInfoData : NSObject
{
    _Bool shouldBold;
    unsigned int rankWeight;
    NSString *rank;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int rankWeight; // @synthesize rankWeight;
@property(nonatomic) _Bool shouldBold; // @synthesize shouldBold;
@property(retain, nonatomic) NSString *rank; // @synthesize rank;
- (id)init;

@end

