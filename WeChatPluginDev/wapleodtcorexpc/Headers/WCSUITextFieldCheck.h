//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCSUITextFieldCheck
{
    struct shared_ptr<__WCSN::__WCSBCP> check;
    _Bool _tracking;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onEditChange:(id)arg1;
- (void)onEndEdit:(id)arg1;
- (void)onBeginEdit:(id)arg1;
- (id)getData;
- (void)pause;
- (void)stop;
- (void)start;
- (void)printResult;
- (void)dealloc;
- (id)init;

@end

