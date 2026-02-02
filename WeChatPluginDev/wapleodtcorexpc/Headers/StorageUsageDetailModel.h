//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface StorageUsageDetailModel : NSObject
{
    unsigned long long _type;
    unsigned long long _size;
    NSString *_title;
    NSString *_usageDescription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *usageDescription; // @synthesize usageDescription=_usageDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

