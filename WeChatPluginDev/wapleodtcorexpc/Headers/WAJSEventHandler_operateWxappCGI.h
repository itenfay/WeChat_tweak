//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAJSEventHandler_operateWxappCGI
{
    unsigned int _curCgi;
}

@property(nonatomic) unsigned int curCgi; // @synthesize curCgi=_curCgi;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleJSEvent:(id)arg1;

@end

