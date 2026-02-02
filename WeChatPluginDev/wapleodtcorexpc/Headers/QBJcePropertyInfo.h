//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QBJcePair;

@interface QBJcePropertyInfo : NSObject
{
    _Bool flag;
    long long tag;
    NSString *name;
    NSString *type;
    QBJcePair *ext;
}

+ (id)propertyInfo;
@property(retain, nonatomic) QBJcePair *ext; // @synthesize ext;
@property(retain, nonatomic) NSString *type; // @synthesize type;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) _Bool flag; // @synthesize flag;
@property(nonatomic) long long tag; // @synthesize tag;
- (void).cxx_destruct;
- (id)description;
- (long long)compareWithTag:(id)arg1;
- (id)init;

@end

