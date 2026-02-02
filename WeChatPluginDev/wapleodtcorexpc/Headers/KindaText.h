//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface KindaText : NSObject
{
    NSMutableArray *_m_textArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_textArray; // @synthesize m_textArray=_m_textArray;
- (void)appendLink:(id)arg1;
- (void)appendText:(id)arg1;
- (id)textArray;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

