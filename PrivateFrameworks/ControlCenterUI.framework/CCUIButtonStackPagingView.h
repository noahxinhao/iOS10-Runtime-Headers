/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIButtonStackPagingView : CCUIControlCenterSectionView <CCUIButtonStackLayoutDelegate, UIScrollViewDelegate> {
    long long  _axis;
    NSLayoutConstraint * _bottomMargin;
    unsigned long long  _buttonStretchThreshold;
    NSMutableArray * _buttons;
    <CCUIButtonStackPagingViewDelegate> * _delegate;
    double  _interButtonPadding;
    NSLayoutConstraint * _leadingMargin;
    unsigned long long  _maxButtonsPerPage;
    UIStackView * _pagesStackView;
    CCUIImmediateTouchScrollView * _scrollView;
    NSLayoutConstraint * _topMargin;
    NSLayoutConstraint * _trailingMargin;
}

@property (nonatomic) long long axis;
@property (nonatomic) unsigned long long buttonStretchThreshold;
@property (nonatomic, copy) NSArray *buttons;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCUIButtonStackPagingViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interButtonPadding;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic) unsigned long long maxButtonsPerPage;
@property (nonatomic) long long pagingAxis;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyConfigurationToButtonStacks;
- (id)_internalButtons;
- (void)_organizeButtonsInPages;
- (id)_primaryButtons;
- (void)addButton:(id)arg1;
- (long long)axis;
- (void)buttonStack:(id)arg1 didLayoutWithSpacing:(double)arg2;
- (unsigned long long)buttonStretchThreshold;
- (id)buttons;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)interButtonPadding;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (unsigned long long)maxButtonsPerPage;
- (long long)pagingAxis;
- (void)removeButton:(id)arg1;
- (void)resortButtons;
- (void)scrollToPage:(unsigned long long)arg1 animated:(bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAxis:(long long)arg1;
- (void)setButtonStretchThreshold:(unsigned long long)arg1;
- (void)setButtons:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterButtonPadding:(double)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMaxButtonsPerPage:(unsigned long long)arg1;
- (void)setPagingAxis:(long long)arg1;

@end
