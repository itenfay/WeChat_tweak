//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSArray, NSString;

@interface CExtendInfoOfReader : NSObject
{
    NSArray *m_arrReaderWaps;
    unsigned int m_mmreaderSubType;
    CMessageWrap *m_refMessageWrap;
}

+ (void)CreateExtendInfoWithUserName:(id)arg1 retExtendInfo:(id *)arg2 retIsContinueDispatch:(_Bool *)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(nonatomic) unsigned int m_mmreaderSubType; // @synthesize m_mmreaderSubType;
@property(retain, nonatomic) NSArray *m_arrReaderWaps; // @synthesize m_arrReaderWaps;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

