//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PushMailWrap : NSObject
{
    _Bool bHasAttachment;
    NSString *nsSender;
    NSString *nsSenderAddress;
    NSString *nsSubject;
    NSString *nsDigest;
    NSString *nsDate;
    NSString *nsWapLink;
    NSString *nsMailID;
    NSString *nsAccount;
    NSString *nsArgs;
    unsigned long long uiUin;
    NSMutableArray *arrToList;
    NSMutableArray *arrCCList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrCCList; // @synthesize arrCCList;
@property(retain, nonatomic) NSMutableArray *arrToList; // @synthesize arrToList;
@property(nonatomic) unsigned long long uiUin; // @synthesize uiUin;
@property(nonatomic) _Bool bHasAttachment; // @synthesize bHasAttachment;
@property(retain, nonatomic) NSString *nsArgs; // @synthesize nsArgs;
@property(retain, nonatomic) NSString *nsAccount; // @synthesize nsAccount;
@property(retain, nonatomic) NSString *nsMailID; // @synthesize nsMailID;
@property(retain, nonatomic) NSString *nsWapLink; // @synthesize nsWapLink;
@property(retain, nonatomic) NSString *nsDate; // @synthesize nsDate;
@property(retain, nonatomic) NSString *nsDigest; // @synthesize nsDigest;
@property(retain, nonatomic) NSString *nsSubject; // @synthesize nsSubject;
@property(retain, nonatomic) NSString *nsSenderAddress; // @synthesize nsSenderAddress;
@property(retain, nonatomic) NSString *nsSender; // @synthesize nsSender;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

