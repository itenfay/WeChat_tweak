//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCOrderKeyValueView : NSObject
{
    NSArray *_items;
    id _target;
}

@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)copyableTextView;
- (id)detailLabel;
- (id)nameLabel;
- (id)lineView;
- (void)setupViews;
- (id)init;
- (void)dealloc;

@end

