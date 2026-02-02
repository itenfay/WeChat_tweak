//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface CExtendInfoOfTextForBiz : NSObject
{
    CMessageWrap *m_refMessageWrap;
}

+ (void)CreateExtendInfoWithTypeForBiz:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
- (id)GetDisplayContent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

