//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface ResourceCountView : UIView
{
    UIImageView *_arrowImageView;
    UIImageView *_recordImageView;
    UILabel *_recordCountLabel;
    UIImageView *_fileImageView;
    UILabel *_fileCountLabel;
    UIImageView *_videoImageView;
    UILabel *_videoCountLabel;
    UIImageView *_imgImageView;
    UILabel *_imgCountLabel;
    unsigned long long _imageCount;
    unsigned long long _videoCount;
    unsigned long long _fileCount;
    unsigned long long _recordCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long recordCount; // @synthesize recordCount=_recordCount;
@property(nonatomic) unsigned long long fileCount; // @synthesize fileCount=_fileCount;
@property(nonatomic) unsigned long long videoCount; // @synthesize videoCount=_videoCount;
@property(nonatomic) unsigned long long imageCount; // @synthesize imageCount=_imageCount;
@property(retain, nonatomic) UILabel *imgCountLabel; // @synthesize imgCountLabel=_imgCountLabel;
@property(retain, nonatomic) UIImageView *imgImageView; // @synthesize imgImageView=_imgImageView;
@property(retain, nonatomic) UILabel *videoCountLabel; // @synthesize videoCountLabel=_videoCountLabel;
@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) UILabel *fileCountLabel; // @synthesize fileCountLabel=_fileCountLabel;
@property(retain, nonatomic) UIImageView *fileImageView; // @synthesize fileImageView=_fileImageView;
@property(retain, nonatomic) UILabel *recordCountLabel; // @synthesize recordCountLabel=_recordCountLabel;
@property(retain, nonatomic) UIImageView *recordImageView; // @synthesize recordImageView=_recordImageView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

