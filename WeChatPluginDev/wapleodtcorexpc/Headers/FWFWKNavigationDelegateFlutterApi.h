//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol FlutterBinaryMessenger;

@interface FWFWKNavigationDelegateFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> *_binaryMessenger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger; // @synthesize binaryMessenger=_binaryMessenger;
- (void)didFinishNavigationForDelegateWithIdentifier:(id)arg1 webViewIdentifier:(id)arg2 URL:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithBinaryMessenger:(id)arg1;

@end

