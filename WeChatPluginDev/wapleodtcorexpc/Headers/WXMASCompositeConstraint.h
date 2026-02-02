//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WXMASCompositeConstraint
{
    id _mas_key;
    NSMutableArray *_childConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *childConstraints; // @synthesize childConstraints=_childConstraints;
@property(retain, nonatomic) id mas_key; // @synthesize mas_key=_mas_key;
- (void)uninstall;
- (void)install;
- (void)deactivate;
- (void)activate;
- (void)setCenterOffset:(struct CGPoint)arg1;
- (void)setSizeOffset:(struct CGSize)arg1;
- (void)setOffset:(double)arg1;
- (void)setInset:(double)arg1;
- (void)setInsets:(struct UIEdgeInsets)arg1;
- (CDUnknownBlockType)key;
- (id)addConstraintWithLayoutAttribute:(long long)arg1;
- (CDUnknownBlockType)equalToWithRelation;
- (CDUnknownBlockType)priority;
- (CDUnknownBlockType)dividedBy;
- (CDUnknownBlockType)multipliedBy;
- (id)constraint:(id)arg1 addConstraintWithLayoutAttribute:(long long)arg2;
- (void)constraint:(id)arg1 shouldBeReplacedWithConstraint:(id)arg2;
- (id)initWithChildren:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

