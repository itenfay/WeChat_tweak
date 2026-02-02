//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol GetQRCodeInfoLogicDelegate;

@interface GetQRCodeInfoLogic : NSObject
{
    float _cgiTimeout;
    id <GetQRCodeInfoLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GetQRCodeInfoLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float cgiTimeout; // @synthesize cgiTimeout=_cgiTimeout;
- (void)dealloc;
- (void)handleQRCodeInfoResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getQRCodeInfo:(unsigned int)arg1 codeStrArray:(id)arg2 sessionArray:(id)arg3;
- (void)getQRCodeInfo:(unsigned int)arg1 codeStr:(id)arg2 session:(id)arg3;

@end

