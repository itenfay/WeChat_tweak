//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAJSEventHandler_adOperateWXData
{
}

- (void)endCancel;
- (void)endOKWithData:(id)arg1;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2;
- (void)endErrorWithMessage:(id)arg1;
- (void)onResponseData:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleJSEvent:(id)arg1;

@end

