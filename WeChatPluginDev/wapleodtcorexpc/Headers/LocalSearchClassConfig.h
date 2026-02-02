//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LSTargetGenerator, NSMutableArray;

@interface LocalSearchClassConfig : NSObject
{
    Class _objClass;
    LSTargetGenerator *_nsKeyGenerator;
    NSMutableArray *_arrMatchConfig;
}

+ (id)makeDefaultConfigOfFTSFeatureItem;
+ (id)makeDefaultConfigOfMailContact;
+ (id)makeDefaultConfigOfAddressBookFriend;
+ (id)makeDefaultConfigOfContact;
+ (id)makeDefaultClassConfig:(Class)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrMatchConfig; // @synthesize arrMatchConfig=_arrMatchConfig;
@property(retain, nonatomic) LSTargetGenerator *nsKeyGenerator; // @synthesize nsKeyGenerator=_nsKeyGenerator;
@property(nonatomic) Class objClass; // @synthesize objClass=_objClass;

@end

