//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayLqtCellInfo : NSObject
{
    int _is_show_cell;
    int _is_open_lqt;
    NSString *_cell_icon;
    NSString *_lqt_open_url;
    NSString *_lqt_title;
    NSString *_lqt_wording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lqt_wording; // @synthesize lqt_wording=_lqt_wording;
@property(retain, nonatomic) NSString *lqt_title; // @synthesize lqt_title=_lqt_title;
@property(retain, nonatomic) NSString *lqt_open_url; // @synthesize lqt_open_url=_lqt_open_url;
@property(nonatomic) int is_open_lqt; // @synthesize is_open_lqt=_is_open_lqt;
@property(retain, nonatomic) NSString *cell_icon; // @synthesize cell_icon=_cell_icon;
@property(nonatomic) int is_show_cell; // @synthesize is_show_cell=_is_show_cell;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

