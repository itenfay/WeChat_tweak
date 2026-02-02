//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface MMLiveFaceDecodeTask : NSObject
{
    NSData *_encodedData;
    double _dataRecvTime;
}

+ (char *)transferTexBufFromAlphaToRGBA:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
+ (char *)getDecodedRGBATexBufFromJbigBuf:(char *)arg1 length:(int)arg2 dstWidth:(unsigned long long *)arg3 dstHeight:(unsigned long long *)arg4;
+ (id)decode:(id)arg1;
+ (_Bool)checkParamValidForEncodedData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double dataRecvTime; // @synthesize dataRecvTime=_dataRecvTime;
@property(retain, nonatomic) NSData *encodedData; // @synthesize encodedData=_encodedData;
- (id)initWithEncodedData:(id)arg1;

@end

