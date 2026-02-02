//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CMailContact : NSObject
{
    unsigned int freq;
    unsigned int sort;
    NSString *name;
    NSString *addr;
    unsigned long long uin;
}

+ (id)xmContactDatasFromContacts:(id)arg1;
+ (id)contactsFromXMContacts:(id)arg1;
+ (id)contactFromXMContact:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long uin; // @synthesize uin;
@property(retain, nonatomic) NSString *addr; // @synthesize addr;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) unsigned int sort; // @synthesize sort;
@property(nonatomic) unsigned int freq; // @synthesize freq;
- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)xmContactData;
- (id)init;

@end

