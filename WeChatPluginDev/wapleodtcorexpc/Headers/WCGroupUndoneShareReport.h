//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCGroupUndoneShareReport
{
    _Bool _isOpenTodo;
    _Bool _isShowEdu;
    unsigned int _oper;
}

@property(nonatomic) unsigned int oper; // @synthesize oper=_oper;
@property(nonatomic) _Bool isShowEdu; // @synthesize isShowEdu=_isShowEdu;
@property(nonatomic) _Bool isOpenTodo; // @synthesize isOpenTodo=_isOpenTodo;
- (void)report;

@end

