//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FlutterJSONMethodCodec : NSObject
{
}

+ (id)sharedInstance;
- (id)unwrapNil:(id)arg1;
- (id)wrapNil:(id)arg1;
- (id)decodeEnvelope:(id)arg1;
- (id)decodeMethodCall:(id)arg1;
- (id)encodeErrorEnvelope:(id)arg1;
- (id)encodeSuccessEnvelope:(id)arg1;
- (id)encodeMethodCall:(id)arg1;

@end

