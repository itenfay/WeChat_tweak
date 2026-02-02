//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol ModifyPatSuffixLogicDelegate;

@interface ModifyPatSuffixLogic
{
    id <ModifyPatSuffixLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ModifyPatSuffixLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)modifiedPatSuffix:(id)arg1;

@end

