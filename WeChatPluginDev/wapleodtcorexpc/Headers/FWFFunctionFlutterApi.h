//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol FlutterBinaryMessenger;

@interface FWFFunctionFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)disposeFunctionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithBinaryMessenger:(id)arg1;

@end

