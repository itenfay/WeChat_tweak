//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface TSKMultiParam : NSObject
{
    _Bool _enableNewStcSection;
    NSData *_dynamicData;
    NSString *_skillString;
    NSString *_mapString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mapString; // @synthesize mapString=_mapString;
@property(nonatomic) _Bool enableNewStcSection; // @synthesize enableNewStcSection=_enableNewStcSection;
@property(retain, nonatomic) NSString *skillString; // @synthesize skillString=_skillString;
@property(retain, nonatomic) NSData *dynamicData; // @synthesize dynamicData=_dynamicData;

@end

