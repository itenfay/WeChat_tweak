//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface COpenIMContactClassify : NSObject
{
    unsigned int _openResSubType;
    NSString *_openIMDescId;
    NSString *_openIMAppid;
    NSString *_openIMDesc;
    NSString *_openimDescQuanPin;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int openResSubType; // @synthesize openResSubType=_openResSubType;
@property(retain, nonatomic) NSString *openimDescQuanPin; // @synthesize openimDescQuanPin=_openimDescQuanPin;
@property(retain, nonatomic) NSString *openIMDesc; // @synthesize openIMDesc=_openIMDesc;
@property(retain, nonatomic) NSString *openIMAppid; // @synthesize openIMAppid=_openIMAppid;
@property(retain, nonatomic) NSString *openIMDescId; // @synthesize openIMDescId=_openIMDescId;
- (long long)compare:(id)arg1;
- (_Bool)isEqualContactClassify:(id)arg1;
- (id)initWithOpenIMDescId:(id)arg1 andOpenIMAppid:(id)arg2 subType:(unsigned int)arg3;
- (id)initWithOpenIMDescId:(id)arg1 andOpenIMAppid:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

