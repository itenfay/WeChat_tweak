//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardReaderWriter;

@interface FlutterStandardMethodCodec : NSObject
{
    FlutterStandardReaderWriter *_readerWriter;
}

+ (id)codecWithReaderWriter:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)decodeEnvelope:(id)arg1;
- (id)decodeMethodCall:(id)arg1;
- (id)encodeErrorEnvelope:(id)arg1;
- (id)encodeSuccessEnvelope:(id)arg1;
- (id)encodeMethodCall:(id)arg1;
- (id)initWithReaderWriter:(id)arg1;

@end

