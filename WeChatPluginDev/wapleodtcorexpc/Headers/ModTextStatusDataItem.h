//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ModTextStatusDataItem : NSObject
{
    unsigned int _sequence;
    unsigned int _privateVersion;
    unsigned int _publicVersion;
    NSString *_username;
    NSString *_textStateId;
    NSString *_textStateExtInfo;
    double _friendScore;
    double _contentScore;
    NSString *_privateInfo;
    NSString *_publicInfo;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int publicVersion; // @synthesize publicVersion=_publicVersion;
@property(retain, nonatomic) NSString *publicInfo; // @synthesize publicInfo=_publicInfo;
@property(nonatomic) unsigned int privateVersion; // @synthesize privateVersion=_privateVersion;
@property(retain, nonatomic) NSString *privateInfo; // @synthesize privateInfo=_privateInfo;
@property(nonatomic) unsigned int sequence; // @synthesize sequence=_sequence;
@property(nonatomic) double contentScore; // @synthesize contentScore=_contentScore;
@property(nonatomic) double friendScore; // @synthesize friendScore=_friendScore;
@property(retain, nonatomic) NSString *textStateExtInfo; // @synthesize textStateExtInfo=_textStateExtInfo;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)getTextStataInner;
- (id)textState;
- (_Bool)isUpdatePacketInfo;
- (_Bool)isValid;
- (id)description;

@end

