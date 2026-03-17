//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PreloadMsgInfo : NSObject
{
    unsigned int _createTime;
    unsigned int _sequenceId;
    unsigned int _localId;
}

+ (id)infoWithCreateTime:(unsigned int)arg1 sequenceId:(unsigned int)arg2 localId:(unsigned int)arg3;
+ (id)infoWithMsgWrap:(id)arg1;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) unsigned int sequenceId; // @synthesize sequenceId=_sequenceId;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
- (id)description;
- (_Bool)isSmallerThan:(id)arg1;
- (_Bool)isSmallerThanOrEqualTo:(id)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (_Bool)isGreaterThanOrEqualTo:(id)arg1;
- (_Bool)isGreaterThan:(id)arg1;
- (long long)compareWithCreateTime:(unsigned int)arg1 sequenceId:(unsigned int)arg2 localId:(unsigned int)arg3;
- (long long)compareWithOtherMsgInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

