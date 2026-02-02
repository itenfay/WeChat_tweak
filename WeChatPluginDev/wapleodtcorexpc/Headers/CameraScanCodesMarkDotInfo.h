//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CameraScanCodesMarkDotInfo : NSObject
{
    unsigned int _codeVersion;
    NSData *_codeRawData;
    NSString *_codeDecodedString;
    NSString *_codeCharSet;
    NSString *_codeTypeName;
    unsigned long long _index;
    unsigned long long _yunyingType;
    struct CGPoint _center;
}

+ (id)copy:(id)arg1 newCenter:(struct CGPoint)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long yunyingType; // @synthesize yunyingType=_yunyingType;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) unsigned int codeVersion; // @synthesize codeVersion=_codeVersion;
@property(retain, nonatomic) NSString *codeTypeName; // @synthesize codeTypeName=_codeTypeName;
@property(retain, nonatomic) NSString *codeCharSet; // @synthesize codeCharSet=_codeCharSet;
@property(retain, nonatomic) NSString *codeDecodedString; // @synthesize codeDecodedString=_codeDecodedString;
@property(retain, nonatomic) NSData *codeRawData; // @synthesize codeRawData=_codeRawData;

@end

