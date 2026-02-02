//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCGroup : NSObject
{
    NSString *gid;
    NSString *name;
    NSMutableArray *memberList;
}

+ (_Bool)isFixedGroup:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *memberList; // @synthesize memberList;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *gid; // @synthesize gid;
- (id)description;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSvrObject:(id)arg1;
- (id)init;

@end

