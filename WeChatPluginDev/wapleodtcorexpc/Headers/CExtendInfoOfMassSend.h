//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface CExtendInfoOfMassSend : NSObject
{
    CMessageWrap *m_refMessageWrap;
    NSString *_toListMd5;
}

+ (void)CreateExtendInfoWithUserName:(id)arg1 retExtendInfo:(id *)arg2 retIsContinueDispatch:(_Bool *)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *toListMd5; // @synthesize toListMd5=_toListMd5;
@property(nonatomic) __weak CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
- (void)UpdateMassSendContent;
- (void)UpdateContent:(id)arg1;
- (void)ChangeForDisplay;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

