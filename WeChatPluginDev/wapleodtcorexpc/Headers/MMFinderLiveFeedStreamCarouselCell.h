//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFeedStreamCarouselBaseItem;
@protocol MMFinderLiveFeedStreamCarouselCellDelegate, MMFinderLiveFeedStreamCarouselItemProtocol;

@interface MMFinderLiveFeedStreamCarouselCell
{
    id <MMFinderLiveFeedStreamCarouselCellDelegate> _delegate;
    MMFinderLiveFeedStreamCarouselBaseItem<MMFinderLiveFeedStreamCarouselItemProtocol> *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFeedStreamCarouselBaseItem<MMFinderLiveFeedStreamCarouselItemProtocol> *data; // @synthesize data=_data;
@property(nonatomic) __weak id <MMFinderLiveFeedStreamCarouselCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareForReuse;
- (void)reload;
- (void)updateData:(id)arg1;

@end

