//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol PreviewContentViewControllerDelegate;

@interface PreviewContentViewController
{
    id <PreviewContentViewControllerDelegate> _m_previewContentVCDelegate;
    NSString *_curAuthorID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *curAuthorID; // @synthesize curAuthorID=_curAuthorID;
@property(nonatomic) __weak id <PreviewContentViewControllerDelegate> m_previewContentVCDelegate; // @synthesize m_previewContentVCDelegate=_m_previewContentVCDelegate;
- (void)autoClickPreviewBubble;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)ReloadView;
- (void)viewDidAppear:(_Bool)arg1;
- (id)getLeftBarButton;
- (void)tapAppNodeView:(id)arg1;
- (void)viewDidLoad;

@end

