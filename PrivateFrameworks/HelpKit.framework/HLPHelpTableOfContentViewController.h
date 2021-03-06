/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpTableOfContentViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating> {
    UILabel * _copyrightFooterLabel;
    NSLayoutConstraint * _copyrightFooterLabelHeightConstraint;
    NSLayoutConstraint * _copyrightFooterLabelTopConstraint;
    <HLPHelpTableOfContentViewControllerDelegate> * _delegate;
    NSMutableArray * _displayHelpItems;
    UIButton * _footerViewOverlayButton;
    HLPHelpBookController * _helpBookController;
    HLPHelpSearchIndexController * _helpSearchIndexController;
    HLPHelpLocale * _locale;
    double  _minNameLabelHeight;
    NSMutableArray * _openSections;
    UISearchController * _searchController;
    HLPHelpSearchResultTableViewController * _searchResultTableViewController;
    NSArray * _searchTerms;
    bool  _searching;
    UIView * _tableFooterView;
    HLPHelpUsageController * _usageController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HLPHelpTableOfContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HLPHelpBookController *helpBookController;
@property (nonatomic, retain) HLPHelpSearchIndexController *helpSearchIndexController;
@property (nonatomic, retain) HLPHelpLocale *locale;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) NSArray *searchTerms;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *tableFooterView;
@property (nonatomic, retain) HLPHelpUsageController *usageController;

- (void).cxx_destruct;
- (void)appendChildrenForSectionItem:(id)arg1;
- (void)closeSectionItem:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)copyrightButtonTapped;
- (id)delegate;
- (void)deselectCurrentRow;
- (id)helpBookController;
- (id)helpSearchIndexController;
- (id)initWithStyle:(long long)arg1;
- (id)locale;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfVisibleHelpItemForSectionItem:(id)arg1;
- (void)openHelpItem:(id)arg1 animated:(bool)arg2;
- (void)scrollToHelpItem:(id)arg1 deselectImmediately:(bool)arg2 animated:(bool)arg3;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)searchController;
- (id)searchTerms;
- (void)setDelegate:(id)arg1;
- (void)setHelpBookController:(id)arg1;
- (void)setHelpSearchIndexController:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setTableFooterView:(id)arg1;
- (void)setUsageController:(id)arg1;
- (void)showHelpBookInfo;
- (void)showTopicItem:(id)arg1 fromTableView:(id)arg2;
- (id)tableFooterView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateCellSelectionWithScollPosition:(long long)arg1 helpItem:(id)arg2 animated:(bool)arg3;
- (void)updateFooterViewLayout;
- (void)updateNameLabelMetadata;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateWithHelpBookController:(id)arg1;
- (id)usageController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
