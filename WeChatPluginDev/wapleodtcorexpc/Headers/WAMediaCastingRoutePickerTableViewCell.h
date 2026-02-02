//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMProgressViewEx, MMUILabel, UIImageView, UIView, WAMediaCastingRoutePickerDeviceItem;

@interface WAMediaCastingRoutePickerTableViewCell : UITableViewCell
{
    WAMediaCastingRoutePickerDeviceItem *_deviceItem;
    MMUILabel *_deviceLabel;
    UIView *_separatorLineView;
    MMUILabel *_failLabel;
    UIImageView *_successImageView;
    MMProgressViewEx *_loadingView;
    unsigned long long _status;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *successImageView; // @synthesize successImageView=_successImageView;
@property(retain, nonatomic) MMUILabel *failLabel; // @synthesize failLabel=_failLabel;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) MMUILabel *deviceLabel; // @synthesize deviceLabel=_deviceLabel;
@property(retain, nonatomic) WAMediaCastingRoutePickerDeviceItem *deviceItem; // @synthesize deviceItem=_deviceItem;
- (void)layoutSubviews;
- (void)updateWith:(id)arg1 deviceStatus:(unsigned long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

