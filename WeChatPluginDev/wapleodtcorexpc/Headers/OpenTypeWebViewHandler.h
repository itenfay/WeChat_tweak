//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OpenApiParameter;

@interface OpenTypeWebViewHandler : NSObject
{
    OpenApiParameter *_parameter;
    long long _opentypewebviewSubtype;
}

- (void).cxx_destruct;
@property(nonatomic) long long opentypewebviewSubtype; // @synthesize opentypewebviewSubtype=_opentypewebviewSubtype;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void)onPreEnterWechatDone;
- (id)encodeUrl:(id)arg1;
- (void)doOpenWebview;
- (void)startHandleWithOpenParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

