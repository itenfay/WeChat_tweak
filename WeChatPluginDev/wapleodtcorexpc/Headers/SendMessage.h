//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SendMessage : NSObject
{
    _Bool _needCheckEasterEgg;
    unsigned int _version;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    unsigned int _status;
    unsigned int _imageStatus;
    unsigned int _type;
    NSString *_userName;
    NSString *_message;
    NSString *_msgSource;
}

+ (void)initialize;
+ (void)PBArrayAdd_needCheckEasterEgg;
+ (void)PBArrayAdd_msgSource;
+ (void)PBArrayAdd_message;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_imageStatus;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_msgLocalId;
+ (void)PBArrayAdd_version;
- (void).cxx_destruct;
@property(nonatomic) _Bool needCheckEasterEgg; // @synthesize needCheckEasterEgg=_needCheckEasterEgg;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource=_msgSource;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int imageStatus; // @synthesize imageStatus=_imageStatus;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

